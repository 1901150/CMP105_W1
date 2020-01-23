#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	sf::RectangleShape redRect;
	sf::RectangleShape greenRect;
	sf::RectangleShape blueRect;
	sf::RectangleShape cornerRect;
	sf::CircleShape circle;
	sf::Font font;
	sf::Text text;
};