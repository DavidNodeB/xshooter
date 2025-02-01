#pragma once 
#include "main.hpp"

class Player {
private:
    int health; 
    sf::Vector2f position; 
    sf::Sprite sprite; 
public:
    Player(const std::string &path); 
    void setPos(const sf::Vector2f &pos); 
    void setSpriteSize(sf::IntRect &size); 
    void loadTexture(const std::string &path); 
    void render(sf::RenderWindow &window);
}; 