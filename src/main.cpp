#include <iostream>
#include "market_data/MarketData.h"
#include "order_execution/OrderExecution.h"
#include "model/ModelLogic.h"
#include "logging/Logger.h"

int main() {
    Logger logger;
    logger.log("Starting triangular arbitrage bot.");

    MarketData marketData;
    marketData.fetchData("Exchange A");

    OrderExecution orderExec;
    orderExec.executeOrder("Exchange A", 100.0);

    ModelLogic model;
    model.calculateArbitrage();

    return 0;
}
