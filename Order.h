//
// Created by Farha Naaz on 11-27-2024.
//

#ifndef UNTITLED89_ORDER_H
#define UNTITLED89_ORDER_H
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>

enum OrderMethod {
    DOORDASH = 1,
    PHONE,
    DRIVE_THROUGH,
    ONSITE
};

class Order {
private:
    static int nextOrderID;  // Static variable to generate unique order IDs
    int orderID;
    std::string customerName;
    OrderMethod method;
    std::vector<std::string> items;
    double totalCost;

public:
    Order(const std::string& customerName, OrderMethod method, const std::vector<std::string>& items, double totalCost);

    int getOrderID() const;
    std::string getCustomerName() const;
    OrderMethod getMethod() const;
    const std::vector<std::string>& getItems() const;
    double getTotalCost() const;

    static int getNextOrderID();
};

#endif // ORDER_H


#endif //UNTITLED89_ORDER_H
