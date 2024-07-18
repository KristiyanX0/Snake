#include"../include/Snake.hpp"

Snake::Snake(unsigned int starting_size = 5) 
{
    this->_size = starting_size;
    _SnakeSegments.reserve(_size);
    for (unsigned int i=0; i < _size; ++i)
    {
        _SnakeSegments[i] = {0, _size - 1 - i, Direction::Right};
    }
}

void Snake::setHeadPosition(unsigned int posX, unsigned int posY)
{
    _SnakeSegments[0].X = posX;   
    _SnakeSegments[0].Y = posY;
}

void Snake::move(unsigned int places = 1)
{
    switch (getHeadDirection())
    {
        case Direction::Right:
            break;
        case Direction::Up:
            break;
        case Direction::Left:
            break;
        case Direction::Down:
            break;
        default:
            throw std::logic_error("Invalid direction!");
    }
}

void Snake::setHeadDirection(Direction dir)
{
    _SnakeSegments[0].direction = dir;
}

Direction Snake::getHeadDirection()
{
    return _SnakeSegments[0].direction;
}

void Snake::grow(int size_diff = 5)
{

}