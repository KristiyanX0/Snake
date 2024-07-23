#include"../include/Game.hpp"

Game::Game(Snake snake, Board board)
{
    _snake = snake;
    _board = board;
}

void Game::run() 
{
    
}

Game* createNewGame(Snake snake, Board board)
{
    return new Game(snake, board);
}