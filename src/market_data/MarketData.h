#ifndef MARKET_DATA_H
#define MARKET_DATA_H

#include <string>

class MarketData {
public:
    MarketData();
    ~MarketData();

    void fetchData(const std::string& exchange);
};

#endif // MARKET_DATA_H
