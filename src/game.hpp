#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game {
private: 
    unsigned int screenH;
    unsigned int screenW; 
    std::string title;
    sf::VideoMode vm; 
    sf::RenderWindow *window;  

    void initWindow();

    void pollEvents();

    void update(); 

    void render();
public:
    Game();
    ~Game();  

    void run(); 
}; 

#endif