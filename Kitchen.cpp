//
// Created by FARHA NAAZ on 27-11-2024.
//


#include "Kitchen.h"
#include <iostream>

Kitchen::Kitchen() : currentOrder(nullptr) {}

void Kitchen::startCooking(const Order& order) {
    if (currentOrder) {
        std::cerr << "An order is already being cooked!\n";
        return;
    }
    currentOrder = new Order(order);
    currentOrder->setCookingStatus(true);
    std::cout << "Cooking started for Order ID: " << currentOrder->getOrderId() << "\n";

}

void Kitchen::markOrderComplete() {
    if (!currentOrder) {
        std::cerr << "No order is currently being cooked!\n";
        return;
    }
    std::cout << "Order ID: " << currentOrder->getOrderId() << " is complete.\n";
    delete currentOrder;
    currentOrder = nullptr;
}

std::string Kitchen::getCurrentOrderDetails() const {
    if (!currentOrder)
        return "No order is currently being cooked.";
    return "Currently cooking Order ID: " + std::to_string(currentOrder->getOrderId()) + "\n";
    " (" + currentOrder->getOrderDetails() + ")";
}

bool Kitchen::isOrderCooking() const {
    return currentOrder != nullptr;
}
