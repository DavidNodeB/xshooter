#include <SFML/Graphics.hpp>
#include "main.hpp"
#include "player.hpp"
#include <iostream> 

int main()
{
    // ---------------------INITIALIZE--------------------------
    sf::ContextSettings settings; 
    settings.antiAliasingLevel = 8; 
    auto window = sf::RenderWindow(sf::VideoMode({screenH, screenW}), windowTitle, sf::Style::Default, sf::State::Windowed, settings);
    // ---------------------INITIALIZE--------------------------

    // ---------------------LOAD--------------------------
    Player p1("assets/player/textures/goblin.png"); 

    // ---------------------LOAD--------------------------
    while (window.isOpen())
    {
        // ---------------------UPDATE--------------------------
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        
        // ---------------------UPDATE--------------------------

        // ---------------------DRAW--------------------------
        window.clear();

        p1.render(window); 

        window.display();
        // ---------------------DRAW--------------------------
    }
}
