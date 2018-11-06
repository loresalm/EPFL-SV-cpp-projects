#include <SFML/Graphics.hpp>
#include "network.h"
#include <iostream>
#include "cmath"
#include <string>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800.f, 800.f), "visualization of the network");
    sf::Color background_color(255, 255, 255);
    window.clear(background_color);

    sf::Color network_color(255, 230, 230);
    sf::CircleShape shape(370.f);
    shape.setFillColor(network_color);
    shape.setOutlineThickness (25.f);
    shape.setOrigin(-30.f,-30.f);
    window.draw(shape);

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) return EXIT_FAILURE;
    sf::Text text("i",font);
    text.setCharacterSize(15);
    text.setColor(sf::Color::Black);

    std::string s;
    double angles = M_PI/50;
    double newAngles = 0;

     //RandomNumbers RNG(101);

     Network net;
     size_t netsize;
     net.Network::resize(100);
     netsize=net.Network::random_connect(2);
     double posx;
     double posy;
     double posY_link;
     double posX_link;
     double nod_dist;
     double posX_node;
     double posY_node;

    size_t node(0);
    vector<size_t> nodeList;

    for(int i(0); i<100; i++)
		{
			posx = (390.f*cos(newAngles))+391;
			posy = (390.f*sin(newAngles))+391;
			posX_node = (330.f*cos(newAngles))+391;
			posY_node = (330.f*sin(newAngles))+391;

			s = std::to_string(i);

			text.setString(s);
			text.setPosition(sf::Vector2f(posx,posy));
			window.draw(text);

			nodeList = net.Network::neighbors(node);
			node++;

			for(size_t n(0); n < nodeList.size(); n++)
			{

                nod_dist = nodeList[n]-node;
                posX_link = (370.f*cos(newAngles+(angles*(abs(nod_dist)))))+400;
                posY_link = (370.f*sin(newAngles+(angles*(abs(nod_dist)))))+400;
				sf::Vertex line[] =
                {
					sf::Vertex(sf::Vector2f(posX_node, posY_node),sf::Color::Black),
					sf::Vertex(sf::Vector2f( posX_link, posY_link),sf::Color::Black)
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
