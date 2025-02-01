#pragma once 
#include "main.hpp"

class Player {
private:
    int health; 
    sf::Vector2f pos; 
    sf::Sprite sprite; 
public:
    Player(const std::string &path); 

    void setPosition(const sf::Vector2f &pos); 
    void setSize(const sf::IntRect &size); 
    void loadTexture(const std::string &path); 
    void render(sf::RenderWindow &window);
}; 