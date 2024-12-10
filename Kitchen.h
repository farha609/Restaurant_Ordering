//
// Created by FARHA NAAZ on 27-11-2024.
//

#ifndef UNTITLED92_KITCHEN_H
#define UNTITLED92_KITCHEN_H

#include "Order.h"
#include <string>

class Kitchen {
private:
    Order* currentOrder;

public:
    Kitchen();
    void startCooking(const Order& order);
    void markOrderComplete();
    std::string getCurrentOrderDetails() const;
    bool isOrderCooking() const;
};


#endif //UNTITLED92_KITCHEN_H
