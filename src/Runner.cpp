#include <iostream>
#include"../include/Run.hpp"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

Runner* Runner::runner = nullptr;

Runner& Runner::getInstance() {
    if (runner == nullptr) {
        runner = new Runner();
    }
    return *runner;
}

void Runner::start() {
    std::cout << "Game starting ..." << std::endl;
    
}

Runner::Runner() {}