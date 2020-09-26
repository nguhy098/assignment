#ifndef GAME_H
#define GAME_H
#include <ostream>
#include <string>
#include "dungeonlevelbuilder.h"
#include <random>
#include <ctime>


class Game
{
public:
    Game();
    Game(const Game& other) = default;
    Game instance();
    const Game& other() const;
    void setDungeonType(DungeonLevelBuilder);
    void createExampleLevel();
    void createRandomLevel(std::string name, int width, int height);
    void displayLevel(std::string display);
    double randomDouble();

private:
    std::string _name;
    int _width;
    int _height;
    std::string _display;

    std::mt19937 _randomGenerator{uint32_t(time(nullptr))}; //!< Mersenne Twister random number generator seeded by current time
    std::uniform_real_distribution<double> _realDistribution{0.0, 1.0}; //!< For random numbers between 0.0 & 1.0



};
std::ostream &operator<<(std::ostream &out, const Game &pt);



std::ostream &operator<<(std::ostream &out, const Game &pt);

#endif // GAME_H
