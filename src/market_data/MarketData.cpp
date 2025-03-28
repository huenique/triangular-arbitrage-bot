#include "MarketData.h"
#include <iostream>

MarketData::MarketData() {
    // Initialization code here
}

MarketData::~MarketData() {
    // Cleanup code here
}

void MarketData::fetchData(const std::string& exchange) {
    std::cout << "Fetching market data from " << exchange << std::endl;
}
