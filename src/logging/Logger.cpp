#include "Logger.h"
#include <iostream>

Logger::Logger() {
    // Initialization code here
}

Logger::~Logger() {
    // Cleanup code here
}

void Logger::log(const std::string& message) {
    std::cout << "[LOG]: " << message << std::endl;
}
