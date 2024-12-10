//
// Created by FARHA NAAZ on 27-11-2024.
//

#ifndef UNTITLED92_ORDERQUEUE_H
#define UNTITLED92_ORDERQUEUE_H

#include "Order.h"
#include <queue>

class OrderQueue {
private:
    std::queue<Order> orders;
    int skipCount;

public:
    OrderQueue();
    void addOrder(const Order& order);
    Order getNextOrder();
    bool isEmpty() const;
    int getSkipCount() const;
    void incrementSkipCount();
    void resetSkipCount();
};

#endif //UNTITLED92_ORDERQUEUE_H
