#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	windowSize = window->getSize();

	// initialise game objects
	rect1.setSize(sf::Vector2f(64, 64));
	rect1.setPosition(500, 300);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(48, 48));
	rect2.setPosition(508, 308);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(32, 32));
	rect3.setPosition(516, 316);
	rect3.setFillColor(sf::Color::Blue);

	rect4.setSize(sf::Vector2f(32, 32));
	rect4.setPosition(windowSize.x - 32, windowSize.y - 32);
	rect4.setFillColor(sf::Color::Green);

	circle.setRadius(50);
	circle.setPosition(500, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(10.f);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font.";
	}

	text.setFont(font);
	text.setString("Hello World.");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Black);
	text.setPosition(500, 100);
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
	windowSize = window->getSize();
	rect4.setPosition(windowSize.x - 32, windowSize.y - 32);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
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