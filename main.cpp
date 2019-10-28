#include "log_manager.h"

//============================================================
int main()
{
    std::shared_ptr<Log> logger;

    logger = LogManager::get_logger("main");

    logger->open_logfile("D:\\lll2.txt");

    logger << " ergwbtg " << 22 << INFO;

    logger << 22 << " faewr " << INFO;

    logger << INFO << 2;

    logger << " " << 323 << CRITICAL;

    logger->close_log();

    return 0;
}
