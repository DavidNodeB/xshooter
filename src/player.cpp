#include "main.hpp"
#include "player.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdexcept>



sf::Texture texture; 

Player::Player(const std::string &path) : sprite(texture) {
    loadTexture(path); 
}

void Player::loadTexture(const std::string &path) {
    if(!texture.loadFromFile(path))
    {
        throw std::runtime_error("Failed to load player texture"); 
    } else 
    {
        std::cout << "Loaded player textures" << "\n"; 
    }
    sprite.setTexture(texture);
}

// void Player::setPosition(const sf::Vector2f &pos) {

// }

void Player::render(sf::RenderWindow &window) {
    window.draw(sprite); 
}
