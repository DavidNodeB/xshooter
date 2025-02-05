#pragma once
#include "main.hpp"

class Animation {
private:
    std::vector<sf::IntRect> frames; 
    int framecount; 
    float animationSpeed; 
    int animationIndex; 
    sf::Clock clock; 
    float animationTime; 
public:
    Animation(sf::Sprite &target); 
    void addFrame(sf::IntRect frameRect); 
}; 