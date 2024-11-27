//
// Created by SYED FAZIL on 27-11-2024.
//

#ifndef UNTITLED89_RESTAURANTSYSTEM_H
#define UNTITLED89_RESTAURANTSYSTEM_H

#include "Order.h"
#include "OrderQueue.h"

class RestaurantSystem {
private:
    OrderQueue orderQueue;

public:
    void placeOrder(const std::string& customerName, OrderMethod method, const std::vector<std::string>& items, double totalCost);
    int getLastOrderID() const;
    void processNextOrder();
    void displayAllOrders();
    void cancelOrder();
};

#endif //UNTITLED89_RESTAURANTSYSTEM_H
