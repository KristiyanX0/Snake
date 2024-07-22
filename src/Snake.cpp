#include"../include/Snake.hpp"
#define HEAD 0

Snake::Snake(unsigned int starting_size = 5)
{
    _SnakeSegments.reserve(starting_size);
    for (unsigned int i=0; i < starting_size; ++i)
    {
        _SnakeSegments[i] = {0, starting_size - 1 - i, Direction::Right};
    }
}

void Snake::setHeadPosition(unsigned int posX, unsigned int posY)
{
    _SnakeSegments[HEAD].X = posX;   
    _SnakeSegments[HEAD].Y = posY;
}

void Snake::move(unsigned int positions = 1)
{
    auto fSegmentMover = [&](unsigned int index) {
        switch (_SnakeSegments[index].direction)
        {
            case Direction::Right:
                _SnakeSegments[index].X+=positions;
                break;
            case Direction::Up:
                _SnakeSegments[index].Y+=positions;
                break;
            case Direction::Left:
                _SnakeSegments[index].X-=positions;
                break;
            case Direction::Down:
                _SnakeSegments[index].Y-=positions;
                break;
            default:
                throw std::logic_error("Invalid direction!");
        }
    };
    fSegmentMover(HEAD);
    for (unsigned int index = 1; index < this->size(); ++index)
    {
        fSegmentMover(index);
        _SnakeSegments[index].direction = _SnakeSegments[index - 1].direction;
    }
}

void Snake::setHeadDirection(Direction dir)
{
    _SnakeSegments[HEAD].direction = dir;
}

Direction Snake::getHeadDirection()
{
    return _SnakeSegments[HEAD].direction;
}

void Snake::grow(unsigned int size_difference = 1)
{
    const Segment& temp = _SnakeSegments[this->size() - 1];
    unsigned int newX = 0;
    unsigned int newY = 0;
    for (unsigned int index = 0; index < size_difference; ++index)
    {
        switch (temp.direction)
        {
            case Direction::Right:
                newX = temp.X - 1;
                newY = temp.Y;
                break;
            case Direction::Up:
                newX = temp.X;
                newY = temp.Y - 1;
                break;
            case Direction::Left:
                newX = temp.X + 1;
                newY = temp.Y;
                break;
            case Direction::Down:
                newX = temp.X;
                newY = temp.Y + 1;
                break;
            default:
                throw std::logic_error("Invalid direction!");
        }
        _SnakeSegments.push_back({newX, newY, temp.direction});
    }
}

size_t Snake::size()
{
    return _SnakeSegments.size();
}