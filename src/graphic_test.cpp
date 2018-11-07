#include <SFML/Graphics.hpp>
#include "network.h"
#include <iostream>
#include "cmath"
#include <string>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800.f, 800.f), "visualization of the network");
    sf::Color background_color(0, 0, 0);
    window.clear(background_color);

    sf::Color network_color(246, 242, 132);
    //sf::CircleShape shape(375.f);
    //shape.setFillColor(background_color);
    //shape.setOutlineThickness (40.f);
    //shape.setOrigin(-28.f,-28.f);
    //window.draw(shape);

    sf::Font font;
    if (!font.loadFromFile("../src/arial.ttf")) return EXIT_FAILURE;
    sf::Text text("i",font);
    text.setCharacterSize(15);
    text.setColor(sf::Color::White);

    std::string s;
    double newAngles = 0;

     //RandomNumbers RNG(101);

     Network net;
     size_t netsize;
     net.Network::resize(70);
     netsize=net.Network::random_connect(2);
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

                //posX_link = (370.f*cos(newAngles+(angles*(abs(nod_dist)))))+400;
                //posY_link = (370.f*sin(newAngles+(angles*(abs(nod_dist)))))+400;
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

        //window.clear();
        //window.draw(shape);
        /*
        for(int i(0); i<100; i++)
		{
			s = std::to_string(i);
			text.setString(s);
			text.setPosition((320.f*cos(newAngles))+395,(320.f*sin(newAngles))+395);
			newAngles = newAngles + angles;
			window.draw(text);
		}
        */


        window.display();
    }

    return 0;
}
