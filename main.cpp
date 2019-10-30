#include "log_manager.h"
#include <iostream>
#include <memory>

class A
{
  public:
    static const std::string sA;
    A() : logger(LogManager::get_logger(sA))
    {
        logger << " A constructor " << 77 << CRITICAL;
    }
    std::shared_ptr<Log> logger;

    ~A()
    {
        std::cout << " ~A() " << std::endl;
    }
};

const std::string A::sA = "sA";

//============================================================
int main()
{
    const std::string sMAIN = "sMAIN";
    std::shared_ptr<Log> logger;

    logger = LogManager::get_logger(sMAIN);

    logger->open_logfile("D:\\lll2.txt");

    A a;

    A a2;

    logger << " Data from settings file '"
           << "D:\\lll2.txt"
           << "' :" << INFO;

    a.logger << " A from main " << 22 << INFO;

    a2.logger << " A a2 from main " << 434523 << INFO;

    logger << 22 << " from main DLL " << INFO;

    logger << " from main DLL " << 323 << CRITICAL;

    logger->close_log();

    return 0;
}
