#include <SFML/Graphics.hpp>
#include "main.hpp"
#include "player.hpp"
#include <iostream> 

// std::optional<sf::Texture> global_texture_goblin = std::nullopt;
// void load_textures()
// {
//   global_texture_goblin = sf::Texture();
//   if(!global_texture_goblin->loadFromFile("assets/player/textures/goblin.png"))
//     printf("aaaaaaaaaaaahhhhhhhhhhhhhhhhhhhhhhh!!!!!!!!!!!!!\n");
// }
// struct ply
// {
//   sf::Vector2f pos;
//   void render(sf::RenderWindow &window)
//   {
//       sf::Sprite sprite(*global_texture_goblin);
//       sprite.setPosition(pos);
//       window.draw(sprite);
//   }
// };

int main()
{
    sf::ContextSettings settings; 
    settings.antiAliasingLevel = 8; 
    auto window = sf::RenderWindow(sf::VideoMode({screenH, screenW}), windowTitle, sf::Style::Default, sf::State::Windowed, settings);
    
    sf::Texture playerTexture;
    playerTexture.loadFromFile("assets/player/textures/goblin.png");
    Player p1(playerTexture);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        
        window.clear();

        p1.render(window);

        window.display();
    }
}
