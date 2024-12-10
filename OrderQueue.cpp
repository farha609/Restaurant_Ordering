//
// Created by FARHA NAAZ on 27-11-2024.
#include <stdexcept>
#include "OrderQueue.h"

OrderQueue::OrderQueue() : skipCount(0) {}

void OrderQueue::addOrder(const Order& order) {
    orders.push(order);
}

Order OrderQueue::getNextOrder() {
    if (orders.empty())
        throw std::runtime_error("Queue is empty!");
    Order nextOrder = orders.front();
    orders.pop();
    return nextOrder;
}

bool OrderQueue::isEmpty() const {
    return orders.empty();
}

int OrderQueue::getSkipCount() const {
    return skipCount;
}

void OrderQueue::incrementSkipCount() {
    skipCount++;
}

void OrderQueue::resetSkipCount() {
    skipCount = 0;
}
