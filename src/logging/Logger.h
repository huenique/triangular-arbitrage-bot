#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    Logger();
    ~Logger();

    void log(const std::string& message);
};

#endif // LOGGER_H
