//
// Created by Farha Naaz on 11-27-2024.
//

#include "RestaurantSystem.h"
#include "RestaurantSystem.h"
#include <iostream>

void RestaurantSystem::placeOrder(const std::string& customerName, OrderMethod method, const std::vector<std::string>& items, double totalCost) {
    Order newOrder(customerName, method, items, totalCost);
    orderQueue.addOrder(newOrder);
}

int RestaurantSystem::getLastOrderID() const {
    return orderQueue.getLastOrderID();
}

void RestaurantSystem::processNextOrder() {
    if (orderQueue.hasOrders()) {
        Order nextOrder = orderQueue.getNextOrder();
        std::cout << "Processing Order ID: " << nextOrder.getOrderID() << ", Customer: " << nextOrder.getCustomerName() << "\n";
    } else {
        std::cout << "No orders to process.\n";
    }
}

void RestaurantSystem::displayAllOrders() {
    if (orderQueue.hasOrders()) {
        std::cout << "Orders in the queue:\n";
        orderQueue.displayOrders();
    } else {
        std::cout << "No orders in the queue.\n";
    }
}

void RestaurantSystem::cancelOrder() {
    orderQueue.cancelOrder();
    std::cout << "Order canceled.\n";
}

