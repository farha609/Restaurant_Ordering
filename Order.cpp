//
// Created by FARHA NAAZ on 27-11-2024.
//
#include "Order.h"
#include <iostream>

// Constructor to initialize the order details and apply up-charge if method is DoorDash
Order::Order(int id, const std::string& name, const std::string& details, double amount, const std::string& method)
        : orderId(id), customerName(name), orderDetails(details), orderMethod(method), isCooking(false) {
    // Apply 5% up-charge for DoorDash orders
    totalAmount = (orderMethod == "DoorDash" || orderMethod == "doordash") ? amount * 1.05 : amount;
}

// Getter methods
int Order::getOrderId() const {
    return orderId;
}

std::string Order::getCustomerName() const {
    return customerName;
}

std::string Order::getOrderDetails() const {
    return orderDetails;
}

double Order::getTotalAmount() const {
    return totalAmount;
}

std::string Order::getOrderMethod() const {
    return orderMethod;
}

// Setter method
void Order::setCookingStatus(bool status) {
    isCooking = status;
}
