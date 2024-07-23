#ifndef BOARD_HPP
#define BOARD_HPP

#include<iostream>
#include<vector>
#include"./Snake.hpp"

class Board
{
public:
    Board();
    Board(unsigned int size);

    char getPos(unsigned int n, unsigned int m);
    void setPos(unsigned int n, unsigned int m, char element);
private:
    unsigned int _size;
    std::vector<std::vector<char>> matrix;
};

#endif // BOARD_HPP