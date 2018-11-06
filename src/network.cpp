#include "random.h"
#include "network.h"
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

RandomNumbers no;

void Network::resize(const size_t& newsize)
{
	values.resize(newsize);
	no.normal(values);

}

bool Network::add_link(const size_t& a, const size_t& b)
{
    if(a < values.size() and  b < values.size() and a != b)
	{
		pair <multimap<size_t,size_t>::iterator, multimap<size_t,size_t>::iterator> result = links.equal_range(a);

		for( multimap<size_t,size_t>::iterator i = result.first; i != result.second; i++)
		{
			 if(i->second==b)
			 {
				return false;
			 }
		 }

		 links.insert({{a,b},{b,a}}); //link a to b,link b to a

		 vector<size_t> alist(this->neighbors(a));
		 vector<size_t> blist(this->neighbors(b));

        return true;


	}else{

		return false;
	}
}

size_t Network::random_connect(const double& n)
{
	int totalNoConnections = 0;
	int totalNoConnectionsFake = 0;

	//erase privious links
	links.clear();

	vector<size_t> connectionDegrees (values.size());
	//no.poisson(connectionDegrees,n)

	for(size_t i(0); i<connectionDegrees.size(); i++)
	{
	 connectionDegrees[i]=no.poisson(n);
	 totalNoConnectionsFake = totalNoConnectionsFake + connectionDegrees[i];
	}

	vector<size_t> valuesCopy(values.size());

	for(size_t i(0); i<valuesCopy.size(); i++)
	{
		valuesCopy[i]=i;
	}

	for(size_t i(0); i<values.size(); i++)
	{
		bool repeat;
		no.shuffle(valuesCopy);

		if(connectionDegrees[i]!=0)
		{
			for(size_t con(1); con<=connectionDegrees[i]; con++)
			{

				repeat = this->add_link(i,valuesCopy[con]);

				totalNoConnections = totalNoConnections + 1;


				if(not(repeat))
				{
					totalNoConnections = totalNoConnections - 1;
					connectionDegrees[i] = connectionDegrees[i]+1;

				}
			}
		}
	}
	return totalNoConnections;

}

size_t Network::set_values(const std::vector<double>&v)
{
	values.clear();
	values=v;
	return values.size();
}

size_t Network::size() const
{
	return values.size();
}

size_t Network::degree(const size_t & _n) const
{
	if(_n<=values.size())
	{
	 	return links.count(_n);
	}else{
	throw std::out_of_range ("node out of network");}
}

double  Network::value(const size_t &_n) const
{
	return values[_n];
}

std::vector<double> Network::sorted_values() const
{
  vector<double> newValues = values;
  sort(newValues.rbegin(), newValues.rend());
  return newValues;
}

std::vector<size_t> Network::neighbors(const size_t&n) const
{
	vector<size_t> neighborslist;
	auto find = links.equal_range(n);
	for(auto i = find.first;i != find.second;i++)
	{
		neighborslist.push_back(i->second);
	}
	return neighborslist;
}












