#pragma once 
#include "main.hpp"

class Player {
private:
    int health; 
    sf::Vector2f position; 
    sf::Sprite sprite; 
public:
    Player(sf::Texture &texture); 
    void setPos(const sf::Vector2f &pos); 
    void setSpriteSize(sf::IntRect &size); 
    void loadTexture(const std::string &path, sf::Texture &texture); 
    void render(sf::RenderWindow &window);
}; 