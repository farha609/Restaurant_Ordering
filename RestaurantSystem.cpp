//
// Created by FARHA NAAZ on 27-11-2024.
//
#include "RestaurantSystem.h"
#include <iostream>

RestaurantSystem::RestaurantSystem() : nextOrderId(1) {}

void RestaurantSystem::placeOrder(const std::string& name, const std::string& details, double amount, const std::string& method) {
    int priority = 3; // Default priority for DoorDash
    if (method == "Drive-through") priority = 0;
    else if (method == "Onsite") priority = 1;
    else if (method == "Phone") priority = 2;

    Order order(nextOrderId++, name, details, amount, method);
    manager.placeOrder(order, priority);
    ReceiptPrinter::printReceipt(order);
}

void RestaurantSystem::fulfillNextOrder() {
    try {
        if (kitchen.isOrderCooking()) {
            std::cerr << "An order is still being cooked. Complete it first.\n";
            return;
        }
        Order nextOrder = manager.getNextOrder();
        kitchen.startCooking(nextOrder);
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
    }
}

void RestaurantSystem::viewCurrentOrder() {
    std::cout << kitchen.getCurrentOrderDetails() << "\n";
}

void RestaurantSystem::markOrderAsPickedUp() {
    if (kitchen.isOrderCooking()) {
        std::cerr << "Current order is being cooked. Complete it first.\n";
        return;
    }
    std::cout << "Order is ready for pickup!\n";
}

void RestaurantSystem::listPendingOrders() {
    manager.listOrders();
}

void RestaurantSystem::cancelOrder(int orderId) {
    // Implement cancellation logic
    std::cout << "Order cancellation not implemented yet.\n";
}

void RestaurantSystem::run() {
    int choice;
    do {
        std::cout << "\n==== Restaurant System ====\n";
        std::cout << "1. Place an Order\n";
        std::cout << "2. Fulfill Next Order\n";
        std::cout << "3. View Current Order\n";
        std::cout << "4. Mark Order as Picked Up\n";
        std::cout << "5. List Pending Orders\n";
        std::cout << "6. Cancel Order\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name, details, method;
                double amount;
                std::cout << "Enter customer name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter order details: ";
                std::getline(std::cin, details);
                std::cout << "Enter total amount: ";
                std::cin >> amount;
                std::cout << "Enter order method (Drive-through/Onsite/Phone/DoorDash): ";
                std::cin.ignore();
                std::getline(std::cin, method);
                placeOrder(name, details, amount, method);
                break;
            }
            case 2:
                fulfillNextOrder();
                break;
            case 3:
                viewCurrentOrder();
                break;
            case 4:
                markOrderAsPickedUp();
                break;
            case 5:
                listPendingOrders();
                break;
            case 6: {
                int orderId;
                std::cout << "Enter Order ID to cancel: ";
                std::cin >> orderId;
                cancelOrder(orderId);
                break;
            }
            case 7:
                std::cout << "Exiting system.\n";
                break;
            default:
                std::cerr << "Invalid choice!\n";
        }
    } while (choice != 7);
}
