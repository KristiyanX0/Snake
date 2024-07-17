#include"../include/Board.hpp"

Board::Board(size_t size)
{
    _size = size;
    matrix.reserve(_size);
    for (std::vector<char> el : matrix)
    {
        el.reserve(_size);
    }
}

char Board::getPos(size_t n, size_t m)
{
    return matrix[n][m];
}

void Board::setPos(size_t n, size_t m, char element)
{
    matrix[n][m] = element;
}