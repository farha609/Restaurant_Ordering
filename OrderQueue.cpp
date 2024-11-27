//
// Created by Farha Naaz on 11-27-2024.
//

#include "OrderQueue.h"
#include <iostream>
#include <stdexcept>

void OrderQueue::addOrder(const Order& order) {
    orders.push(order);
}

Order OrderQueue::getNextOrder() {
    if (!orders.empty()) {
        Order order = orders.front();
        orders.pop();
        return order;
    }
    throw std::out_of_range("No orders in queue");
}

bool OrderQueue::hasOrders() const {
    return !orders.empty();
}

int OrderQueue::getLastOrderID() const {
    if (!orders.empty()) {
        return orders.back().getOrderID();
    }
    return -1;  // Return -1 if there are no orders
}

void OrderQueue::cancelOrder() {
    if (!orders.empty()) {
        orders.pop(); // Cancel the first order in the queue
    }
}

void OrderQueue::displayOrders() const {
    std::queue<Order> tempQueue = orders;
    while (!tempQueue.empty()) {
        Order order = tempQueue.front();
        tempQueue.pop();
        std::cout << "Order ID: " << order.getOrderID()
                  << ", Customer: " << order.getCustomerName()
                  << ", Method: " << order.getMethod()
                  << ", Total Cost: " << order.getTotalCost() << "\n";
    }
}
