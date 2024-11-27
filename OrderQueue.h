//
// Created by SYED FAZIL on 27-11-2024.
//

#ifndef UNTITLED89_ORDERQUEUE_H
#define UNTITLED89_ORDERQUEUE_H


#include "Order.h"
#include <queue>

class OrderQueue {
private:
    std::queue<Order> orders; // Using a queue to handle orders in FIFO order

public:
    void addOrder(const Order& order);
    Order getNextOrder();
    bool hasOrders() const;
    int getLastOrderID() const;
    void cancelOrder();
    void displayOrders() const;
};



#endif //UNTITLED89_ORDERQUEUE_H
