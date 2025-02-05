#include "main.hpp"
#include <cmath>

int main()
{
    sf::ContextSettings settings; 
    settings.antiAliasingLevel = 8; 
    auto window = sf::RenderWindow(sf::VideoMode({screenH, screenW}), windowTitle, sf::Style::Default, sf::State::Windowed, settings);

    sf::Texture playerTexture; 
    sf::Sprite sprite(playerTexture); 

    int framecount = 8; 
    std::vector<sf::IntRect> frames; 
    frames.resize(framecount); 

    frames[0] = sf::IntRect({0, 0}, {32, 32});
    frames[1] = sf::IntRect({32, 0}, {32, 32});
    frames[2] = sf::IntRect({64, 0}, {32, 32});
    frames[3] = sf::IntRect({96, 0}, {32, 32});
    frames[4] = sf::IntRect({128, 0}, {32, 32});
    frames[5] = sf::IntRect({160, 0}, {32, 32});
    frames[6] = sf::IntRect({192, 0}, {32, 32});
    frames[7] = sf::IntRect({224, 0}, {32, 32});

    int animation_index = 0;
    float animation_speed = 3.0f; 

    if (!playerTexture.loadFromFile("assets/player/textures/trooper_crouch.png")) {
        throw std::runtime_error("Failed to load player texture"); 
    }

    sprite.setTextureRect(frames[0]); 
    sprite.setScale({1.5f, 1.5f}); 
    sf::Clock clock; 
    float animationTime = 1.0f; 

    
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        float deltaTime = clock.restart().asSeconds(); 

        animationTime += deltaTime * animation_speed;

        int new_animation_index = floor(animationTime);

        if(new_animation_index != animation_index )
        {
            animation_index = new_animation_index % framecount;
            sprite.setTextureRect(frames[animation_index]);
            if (animation_index == 0)
              animationTime = 0.0f;
        }

        window.clear();

        window.draw(sprite); 

        window.display();
    }
}
