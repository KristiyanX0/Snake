#ifndef SNAKE_HPP
#define SNAKE_HPP

#include<iostream>
#include<vector>
#include<utility>

class Snake
{
public:
    Snake(size_t starting_size = 5);
    void setHeadPos(size_t posX, size_t posY);
private:
    size_t _size;
    std::vector<std::pair<size_t, size_t>> SnakePos;
};

#endif // SNAKE_HPP