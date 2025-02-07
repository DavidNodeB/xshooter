#include <iostream>
#include <stdexcept>
#include "player.hpp"


Player::Player (sf::Texture &texture) : sprite(texture) {
    
}

void Player::loadTexture(const std::string &path, sf::Texture &texture) {
    if(!texture.loadFromFile(path))
    {
        throw std::runtime_error("Failed to load player texture"); 
    }

}

void Player::render(sf::RenderWindow &window) {
    window.draw(sprite);
}
