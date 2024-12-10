//
// Created by FARHA NAAZ on 27-11-2024.
//

#include "ReceiptPrinter.h"

void ReceiptPrinter::printReceipt(const Order& order) {
    std::cout << "===== Receipt =====\n";
    std::cout << "Order ID: " << order.getOrderId() << "\n";
    std::cout << "Customer Name: " << order.getCustomerName() << "\n";
    std::cout << "Order Details: " << order.getOrderDetails() << "\n";
    std::cout << "Total Amount: $" << order.getTotalAmount() << "\n";
    std::cout << "Order Method: " << order.getOrderMethod() << "\n";
    std::cout << "===================\n";
}
