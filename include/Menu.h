#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Macros.h"
#include "Button.h"


class Menu
{
public:
	//Menu();
	Menu(sf::Vector2f size);

	void draw(sf::RenderWindow& window);
	//char handleClick(sf::Vector2f click_location);
	
private:
	sf::Texture m_title;
	std::vector<Button> m_Buttons;
	sf::Vector2f m_position = { 0,0 };
	sf::Vector2f m_size;
};

