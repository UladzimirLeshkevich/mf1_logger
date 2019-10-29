#include "log_manager.h"

class A
{
  public:
    A() : logger(LogManager::get_logger("A_system")) { logger << " A system log " << 77 << CRITICAL; }
    std::shared_ptr<Log> logger;

    void log()
    {
        logger << " A log() " << DEBUG;
    }
};

class B
{
  public:
    B() : logger(LogManager::get_logger("B_system")) { logger << " B system log " << 88 << CRITICAL; }
    std::shared_ptr<Log> logger;
};

//============================================================
int main()
{
    std::shared_ptr<Log> logger;

    logger = LogManager::get_logger("main_system");

    logger->open_logfile("D:\\log_s.txt");

    A a;

    B b;

    //a.logger << " A system log " << 77 << CRITICAL;// NOT OK !!

    //a.log(); // NOT OK !!

    logger << " main system log " << 66 << INFO;

    logger << 66 << " main system log " << WARNING;

    logger->close_log();

    return 0;
}
