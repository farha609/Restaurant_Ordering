//
// Created by FARHA NAAZ on 27-11-2024.
//

#include "OrderManager.h"
#include <iostream>

OrderManager::OrderManager() : queues(4) {}

void OrderManager::placeOrder(const Order& order, int priority) {
    if (priority < 0 || priority >= queues.size())
        throw std::invalid_argument("Invalid priority!");
    queues[priority].addOrder(order);
}

Order OrderManager::getNextOrder() {
    for (auto& queue : queues) {
        if (!queue.isEmpty())
            return queue.getNextOrder();
    }
    throw std::runtime_error("No orders available!");
}

void OrderManager::completeOrder(int priority) {
    if (priority < 0 || priority >= queues.size())
        throw std::invalid_argument("Invalid priority!");
    queues[priority].getNextOrder();
}

void OrderManager::listOrders() {
    for (int i = 0; i < queues.size(); i++) {
        std::cout << "Queue " << i << " has " << (queues[i].isEmpty() ? 0 : 1) << " orders.\n";
    }
}
