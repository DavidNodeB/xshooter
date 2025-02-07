#include "spritehandler.hpp"
#include <iostream>
#include <stdexcept>

SpriteHandler::SpriteHandler(sf::Texture &texture, int frameNum, int pixelSize) 
: sprite(texture), frameCount(frameNum), pixels(pixelSize) 
{
    populateVector(0, 0); 
    sprite.setTextureRect(frames[0]); 
}

SpriteHandler::~SpriteHandler() {

}

void SpriteHandler::populateVector(int x, int y) {
    for(auto i{0}; i < frameCount; ++i) {
        frames.push_back(sf::IntRect({x, y}, {pixels, pixels}));
        x += 32;
    }
}

void SpriteHandler::render(sf::RenderWindow* window) {
    if (!frames.empty()) {
        sprite.setTextureRect(frames[0]);  
        window->draw(sprite);  
    }
}