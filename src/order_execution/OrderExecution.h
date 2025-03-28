#ifndef ORDER_EXECUTION_H
#define ORDER_EXECUTION_H

#include <string>

class OrderExecution {
public:
    OrderExecution();
    ~OrderExecution();

    void executeOrder(const std::string& exchange, double amount);
};

#endif // ORDER_EXECUTION_H
