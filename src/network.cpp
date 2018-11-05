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
		
		//cout << "!!!!"<< (result.first)->second<<endl;
	
		for( multimap<size_t,size_t>::iterator i = result.first; i != result.second; i++)
		{
			 if(i->second==b)
			 {
				//cout << "the link: " << a << "to" << b << "already exist" << endl;
				return false;
			 }
		 }
		 
		 links.insert({{a,b},{b,a}}); //link a to b,link b to a
		 
		 vector<size_t> alist(this->neighbors(a)); 
		 vector<size_t> blist(this->neighbors(b)); 

		 
		 cout << "link sucessfully made: "<< endl;
		 cout << a << " => ";
		 
		 for(size_t i(0); i<alist.size();i++)
		{
		  cout<<alist[i]<<" ";
		}
		cout<<endl;
		cout << b << " => ";
		for(size_t i(0); i<blist.size();i++)
		{
		  cout<<blist[i]<<" ";
		}
		cout<<endl;
		 
		 
		 
		  
		 return true;
		

	}else{
		return false;
	}
}

size_t Network::random_connect(const double& n)
{
	
	cout<< "RANDOM CONNECTING"<<endl;
	size_t totalNoConnections;
	
	//erase privious links 	
	links.clear();
	
	cout << " (1) for each values find no connection: " <<endl;
	vector<size_t> connectionDegrees (values.size());
	for(size_t i(0); i<connectionDegrees.size(); i++)
	{
	 connectionDegrees[i]=this->degree(n);
	 cout << "value "<< i << " => no connections: "<<connectionDegrees[i]<<endl;
	}
	
	cout<< "(3)makeing  the desired connection" <<endl;
	vector<size_t> valuesCopy(values.size());
	
	for(size_t i(0); i<values.size(); i++)
	{
	
		no.shuffle(valuesCopy);
		for(size_t con(0); con<connectionDegrees[i]; con++)
		do{
			bool repeat = this->add_link(i,valuesCopy(con));
		}while(repeat==false)
			
		
	}
	
	//run trough all the nodes
	//cout<< "(1) running trough all the values: " << values.size() <<endl;
    /*
	for(size_t nod(0); nod < values.size(); nod++)
	{	
		  
		size_t noConnections;
		//find the number of connections
		cout<<"(2)find the number of connections for "<<nod<<" => ";
		
		do
		{	
		 noConnections = this->degree(n);
	    }while(noConnections > values.size()-links.count(values[nod]) or noConnections<=0);
	    
	    cout<< noConnections <<endl;
	    
	    //make the desired connection
	    cout<< "(3)makeing  the desired connection" <<endl;
		for(size_t i=(1); i<=noConnections; noConnections++)
		{
			bool repeat;
			do
			{   size_t connectTo = this->degree(n);
				if(connectTo<values.size())
				{	
					repeat = this->add_link(values[nod],connectTo);
					repeat = true;
				}else{
					repeat= false;
				}
		    }while(repeat==false);
		    
		    totalNoConnections++;
		}	
	}*/
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
	RandomNumbers no;
	//size_t nb(no.poisson(_n));
	//cout <<"mon nbr de retour pour"<< _n <<"est:"<< nb <<endl;
	
	return no.poisson(_n);
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
	//cout<< "NEIGHBORS GENERATING  the list for " << n <<" contains:"<<endl;
	vector<size_t> neighborslist;
	auto find = links.equal_range(n);
	for(auto i = find.first;i != find.second;i++)
	{
		neighborslist.push_back(i->second);
	}
	/*
	for(size_t i(0); i<neighborslist.size();i++)
	{
		cout<<neighborslist[i]<<endl;
	}
	*/
	return neighborslist;
}












