//
// Created by FARHA NAAZ on 27-11-2024.
//

#ifndef UNTITLED92_ORDER_H
#define UNTITLED92_ORDER_H


#include <string>

class Order {
private:
    int orderId;
    std::string customerName;
    std::string orderDetails;
    double totalAmount;
    std::string orderMethod;
    bool isCooking;

public:
    // Constructor and other member functions
    Order(int id, const std::string& name, const std::string& details, double amount, const std::string& method);

    // Getter methods
    int getOrderId() const;
    std::string getCustomerName() const;
    std::string getOrderDetails() const;
    double getTotalAmount() const;
    std::string getOrderMethod() const;

    // Setter methods
    void setCookingStatus(bool status);

    // Other functions (e.g., for managing order status)
};

#endif //UNTITLED92_ORDER_H
