#ifndef RUN_CPP
#define RUN_CPP

class Runner
{
public:
    static Runner& getInstance();
    void start();
    Runner(const Runner&) = delete;
    void operator=(const Runner&) = delete;
private:
    static Runner* runner;
    Runner();
};

#endif // RUN_CPP