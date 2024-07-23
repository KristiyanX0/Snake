#ifndef GAME_HPP
#define GAME_HPP

#include"./Snake.hpp"
#include"./Board.hpp"

class Game
{
private:
    Snake _snake;
    Board _board;
public:
    Game(Snake snake, Board board);
    void run();
};

#endif // GAME_HPP