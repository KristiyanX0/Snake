#ifndef BOARD_HPP
#define BOARD_HPP

#include<iostream>
#include<vector>
#include"./Snake.hpp"

class Board
{
public:
    Board(size_t size);

    char getPos(size_t n, size_t m);
    void setPos(size_t n, size_t m, char element);
private:
    size_t _size;
    std::vector<std::vector<char>> matrix;
};

#endif // BOARD_HPP