#include"../include/Board.hpp"
#define DEFAULT_SIZE 30

Board::Board()
{
    Board(DEFAULT_SIZE);
}

Board::Board(unsigned int size)
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