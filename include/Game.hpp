#ifndef GAME_HPP
#define GAME_HPP

#include"./Snake.hpp"

class Game
{
private:
    std::vector<std::pair<int,int>> SnakePos;
public:
    Game(Snake* snake);
};

#endif // GAME_HPP