#ifndef SPRITEHANDLER_H
#define SPRITEHANDLER_H

#include <SFML/Graphics.hpp>

class SpriteHandler {
private:
    sf::Sprite sprite;
    std::vector<sf::IntRect> frames;  
    int frameCount; 
    int pixels; 
public:
    SpriteHandler(sf::Texture& texture, int frameNum, int pixelSize); 

    void populateVector(int x, int y); 

    void render(sf::RenderWindow* window); 

    ~SpriteHandler(); 
};

#endif 
