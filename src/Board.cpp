#include"../include/Board.hpp"

Board::Board(unsigned int size = 20)
{
    _size = size;
    matrix.reserve(_size);
    for (std::vector<char> el : matrix)
    {
        el.reserve(_size);
    }
}

char Board::getPos(unsigned int n, unsigned int m)
{
    return matrix[n][m];
}

void Board::setPos(unsigned int n, unsigned int m, char element)
{
    matrix[n][m] = element;
}