#include"../include/Run.hpp"

int main()
{
    Runner& runner = Runner::getInstance();
    runner.start();
    
    return 0;
}