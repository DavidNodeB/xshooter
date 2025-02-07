#include "game.hpp"
#include "spritehandler.hpp"
#include <iostream>

void Game::initWindow() {
    screenW = 640; 
    screenH = 800; 
    title = "xshooter"; 
    vm = sf::VideoMode({screenW, screenH}); 
    window = new sf::RenderWindow(vm, title);
    if(!texture.loadFromFile("assets/player/textures/trooper_idle.png")) {
        std::cout << "PLAYER TEXTURE FAILED TO LOAD" << "\n";
    }
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

    //draw
    sh.render(window); 
    
    window->display(); 
}

Game::Game() : sh(texture, 4, 32) {
    initWindow(); 
}

Game::~Game() {
    delete window;
}

void Game::run() {
    while (window->isOpen()) {
        update(); 
        render(); 
    }
}