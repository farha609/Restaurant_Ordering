//
// Created by FARHA NAAZ on 27-11-2024.
//

#ifndef UNTITLED92_RESTAURANTSYSTEM_H
#define UNTITLED92_RESTAURANTSYSTEM_H

#include "OrderManager.h"
#include "ReceiptPrinter.h"
#include "Kitchen.h"
#include <vector>

class RestaurantSystem {
private:
    OrderManager manager;
    Kitchen kitchen;
    int nextOrderId;

public:
    RestaurantSystem();
    void placeOrder(const std::string& name, const std::string& details, double amount, const std::string& method);
    void fulfillNextOrder();
    void viewCurrentOrder();
    void markOrderAsPickedUp();
    void listPendingOrders();
    void cancelOrder(int orderId);
    void run(); // Main menu loop
};

#endif //UNTITLED92_RESTAURANTSYSTEM_H
