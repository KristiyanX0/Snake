#include <iostream>
#include"../include/Run.hpp"

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