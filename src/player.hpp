#pragma once 
#include "main.hpp"

class Player {
private:
    int health; 
    sf::Vector2f position; 
    sf::Sprite sprite; 
    sf::Vector2f spriteSize; 
    sf::IntRect setRectangle; 
public:
    Player(sf::Texture &texture);
    void setPos(const sf::Vector2f &pos); 
    void setSize(const sf::Vector2f &size);
    void setRect(const sf::IntRect &sRect); 
    void loadTexture(const std::string &path, sf::Texture &texture); 
    void render(sf::RenderWindow &window);
}; 