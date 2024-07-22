#ifndef SNAKE_HPP
#define SNAKE_HPP

#include<iostream>
#include<vector>
#include<stdexcept>

typedef enum class Directions {
    Right,
    Left,
    Up,
    Down
} Direction;

typedef struct Seg {
    unsigned int X;
    unsigned int Y;
    Direction direction;
} Segment;

class Snake
{
public:
    Snake(unsigned int starting_size);
    void setHeadPosition(unsigned int X, unsigned int Y);
    void move(unsigned int positions);
    void setHeadDirection(Direction dir);
    Direction getHeadDirection();
    void grow(unsigned int size_difference);
    size_t size();
private: 
    std::vector<Segment> _SnakeSegments;
};

#endif // SNAKE_HPP