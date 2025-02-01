#include "main.hpp"
#include "player.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdexcept>



sf::Texture texture; 

Player::Player(const std::string &assetPath) : sprite(texture) {
    loadTexture(assetPath); 
}

void Player::loadTexture(const std::string &path) {
    if(!texture.loadFromFile(path))
    {
        throw std::runtime_error("Failed to load player texture"); 
    }
    sprite.setTexture(texture);
}

void Player::setPos(const sf::Vector2f &pos) {
    position = pos; 
    sprite.setPosition(position); 
}

// void Player::setPosition(const sf::Vector2f &pos) {

// }

void Player::render(sf::RenderWindow &window) {
    window.draw(sprite); 
}
