#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;
	if (!font.loadFromFile("font/arial.ttf")) {

		std::cout << "Error loading font\n";

	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);
	text.setPosition(550, 0);


	// initialise game objects
	redRect.setSize(sf::Vector2f(50, 50));
	redRect.setFillColor(sf::Color::Red);
	redRect.setPosition(300, 300);

	greenRect.setSize(sf::Vector2f(25, 25));
	greenRect.setFillColor(sf::Color::Green);
	greenRect.setPosition(312.5, 312.5);

	blueRect.setSize(sf::Vector2f(12.5, 12.5));
	blueRect.setFillColor(sf::Color::Blue);
	blueRect.setPosition(318.75, 318.75);

	cornerRect.setSize(sf::Vector2f(50, 50));
	cornerRect.setFillColor(sf::Color::Green);
	

	circle.setRadius(50);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setPosition(600, 300);
	circle.setOutlineThickness(2.f);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	cornerRect.setPosition(window->getSize().x - 50, window->getSize().y - 50);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(circle);
	window->draw(redRect);
	window->draw(greenRect);
	window->draw(blueRect);
	window->draw(cornerRect);
	window->draw(text);


	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}