#include <iostream>
#include <thread>
#include <chrono>
#include <memory>
#include"../include/Run.hpp"
#include"../include/Game.hpp"

Runner* Runner::runner = nullptr;

Runner& Runner::getInstance() {
    if (runner == nullptr) {
        runner = new Runner();
    }
    return *runner;
}

void Runner::start() {
    std::cout << "Game starting ..." << std::endl;

    // TO REWORK
    std::unique_ptr<Snake> snake(new Snake());
    std::unique_ptr<Board> board(new Board());
    std::unique_ptr<Game> game(new Game(*snake, *board));

}

Runner::Runner() {}