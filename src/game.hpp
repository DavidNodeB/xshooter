#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include "spritehandler.hpp"

class Game {
private:
    sf::RenderWindow* window;
    sf::VideoMode vm;
    std::string title;
    sf::Texture texture; 
    SpriteHandler sh;
    int screenW, screenH;
public:
    Game();
    ~Game();
    void initWindow();
    void pollEvents();
    void update();
    void render();
    void run();
};

#endif // GAME_HPP
