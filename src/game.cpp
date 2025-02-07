#include "game.hpp"
#include "player.hpp"
#include <iostream>

sf::Texture texture("assets/player/textures/trooper_idle.png");
Player p1(texture);

void Game::initWindow() {
    screenW = 640; 
    screenH = 800; 
    title = "xshooter"; 
    vm = sf::VideoMode({screenW, screenH}); 
    window = new sf::RenderWindow(vm, title);
}

void Game::pollEvents() {
    while(const std::optional event = window->pollEvent()) { 
        if (event->is<sf::Event::Closed>())
        {
            window->close();
        }
    }
}

void Game::update() {
    pollEvents(); 
}

void Game::render() {
    window->clear(); 

    // draw stuff
    p1.render(*window); 

    window->display(); 
}

Game::Game() {
    initWindow(); 
}

Game::~Game() {
    delete window; // delete window cause using new
}

void Game::run() {
    while (window->isOpen()) {
        update(); 
        render(); 
    }
}