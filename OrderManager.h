//
// Created by FARHA NAAZ on 27-11-2024.
//

#ifndef UNTITLED92_ORDERMANAGER_H
#define UNTITLED92_ORDERMANAGER_H


#include "OrderQueue.h"
#include <vector>

class OrderManager {
private:
    std::vector<OrderQueue> queues;

public:
    OrderManager();
    void placeOrder(const Order& order, int priority);
    Order getNextOrder();
    void completeOrder(int priority);
    void listOrders();
};


#endif //UNTITLED92_ORDERMANAGER_H
