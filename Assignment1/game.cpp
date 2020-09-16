#include "game.h"
#include <random>
#include <ctime>

Game::Game()
{

}

double Game::randomDouble() {
    return _realDistribution(_randomGenerator);

}
void Game::createRandomLevel(std::string name, int width, int height){
    _name = name;
    _width = width;
    _height = height;
}
void Game::displayLevel(std::string display){
    _display = display;
}
void createExampleLevel();
void setDungeonType(DungeonLevelBuilder);


