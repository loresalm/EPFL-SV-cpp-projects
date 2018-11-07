#include <SFML/Graphics.hpp>
#include "network.h"
#include <iostream>
#include "cmath"
#include <string>

using namespace std;

int main()
{
    Network net;
    size_t netsize;
    //here you can set the size of your network PLEASE DO NOT EXCEED 100
    net.Network::resize(60);
    //here you can set the average number of connection for each node
    netsize=net.Network::random_connect(5);



    sf::RenderWindow window(sf::VideoMode(800.f, 800.f), "visualization of the network");
    sf::Color background_color(0, 0, 0);
    window.clear(background_color);
    sf::Color network_color(246, 242, 132);
    sf::Font font;
    if (!font.loadFromFile("../src/arial.ttf")) return EXIT_FAILURE;
    sf::Text text("i",font);
    text.setCharacterSize(15);
    text.setColor(sf::Color::White);

    std::string s;
    double newAngles = 0;

     double posx;
     double posy;
     double posY_link;
     double posX_link;
     double nod_dist;
     double posX_node;
     double posY_node;

     double angles = 2*M_PI/net.size();

    size_t node(0);
    vector<size_t> nodeList;

    for(int i(0); i<net.size(); i++)
		{
			posx = (390.f*cos(newAngles))+391;
			posy = (390.f*sin(newAngles))+391;
			posX_node = (370.f*cos(newAngles))+400;
			posY_node = (370.f*sin(newAngles))+400;

			s = std::to_string(i);

			text.setString(s);
			text.setPosition(sf::Vector2f(posx,posy));
			window.draw(text);

			sf::CircleShape dots(2.f);
            dots.setFillColor(sf::Color::Red);
            dots.setPosition(sf::Vector2f(posX_node-3,posY_node-3));
            window.draw(dots);

			nodeList = net.Network::neighbors(node);
			node++;
			for(size_t n(0); n < nodeList.size(); n++)
			{
                posX_link = (370.f*cos(angles*nodeList[n])+400);
                posY_link = (370.f*sin(angles*nodeList[n])+400);

				sf::Vertex line[] =
                {
					sf::Vertex(sf::Vector2f(posX_node, posY_node),network_color),
					sf::Vertex(sf::Vector2f( posX_link, posY_link),network_color)
				};
				window.draw(line, 2 , sf::Lines);
            }

			newAngles = newAngles + angles;

		}

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.display();
    }

    return 0;
}
