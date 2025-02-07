#include "game.hpp"

int main()
{
    Game *game = new Game(); // new returns ptr to game object

    game->run(); 
    
    delete game; // prevent memory leak 
}
