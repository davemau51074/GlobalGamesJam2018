#ifndef PLAYER
#define PLAYER


#include "XB0XCONTROLLER.h"

class Player
{
public:
	Player();
	Player(float x, float y, float const SCALE, bool set);
	~Player();

	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);
//	float colour = 

private:

	sf::RectangleShape m_player;

	XboxController m_xbox;
	float speed = 50;
	float increase = 10;
	sf::Vector2f m_position = sf::Vector2f(200,400);

};

#endif