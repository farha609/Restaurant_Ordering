//
// Created by Farha Naaz on 11-27-2024.
//

#include "Order.h"
#include "Order.h"

int Order::nextOrderID = 1;  // Initialize static variable

Order::Order(const std::string& customerName, OrderMethod method, const std::vector<std::string>& items, double totalCost)
        : customerName(customerName), method(method), items(items), totalCost(totalCost) {
    orderID = nextOrderID++;  // Assign a unique order ID and increment the static variable
}

int Order::getOrderID() const {
    return orderID;
}

std::string Order::getCustomerName() const {
    return customerName;
}

OrderMethod Order::getMethod() const {
    return method;
}

const std::vector<std::string>& Order::getItems() const {
    return items;
}

double Order::getTotalCost() const {
    return totalCost;
}

int Order::getNextOrderID() {
    return nextOrderID;
}
