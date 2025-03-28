#include "OrderExecution.h"
#include <iostream>

OrderExecution::OrderExecution() {
    // Initialization code here
}

OrderExecution::~OrderExecution() {
    // Cleanup code here
}

void OrderExecution::executeOrder(const std::string& exchange, double amount) {
    std::cout << "Executing order on " << exchange 
              << " for amount " << amount << std::endl;
}
