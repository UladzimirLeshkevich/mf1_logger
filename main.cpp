#include "log_manager.h"

class A
{
  public:
    A() : logger(LogManager::get_logger("sA"))
    {
        //logger->open_logfile("D:\\log_s.txt");
        logger << " A system log " << 77 << CRITICAL;
    }
    std::shared_ptr<Log> logger;

    void print()
    {
        log();
    }

    void log()
    {
        logger << " A log() " << DEBUG;
    }

    ~A()
    {
        std::cout << " ~A() " << std::endl;
        //logger->close_log();
    }
};

class B
{
  public:
    B() : logger(LogManager::get_logger("B_system"))
    {
        logger << " B system log " << 88 << CRITICAL;
    }
    std::shared_ptr<Log> logger;

    ~B()
    {
        std::cout << " ~B() " << std::endl;
        //logger->close_log();
    }
};

//============================================================
int main()
{
    std::shared_ptr<Log> logger;
    logger = LogManager::get_logger("main_system");
    logger->open_logfile("D:\\log_s.txt");

    A a;
    B b;

    a.logger << 1 << " A from main " << WARNING;
    a.print();

    b.logger << 2 << " B from main " << WARNING;
    b.logger << " B from main " << 2 << DEBUG;

    logger << " from main " << 2 << WARNING;

    logger->close_log();

    return 0;
}
