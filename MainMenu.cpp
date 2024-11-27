//
// Created by Farha Naaz on 11-27-2024.
//
#include "MainMenu.h"
#include <iostream>

void MainMenu::start() {
    int choice;
    do {
        displayMenu();
        std::cin >> choice;
        handleChoice(choice);
    } while (choice != 5);
}

void MainMenu::displayMenu() {
    std::cout << "\n--- Restaurant Ordering System ---\n";
    std::cout << "1. Place Order\n";
    std::cout << "2. Process Next Order\n";
    std::cout << "3. View All Orders\n";
    std::cout << "4. Cancel Order\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

void MainMenu::handleChoice(int choice) {
    switch (choice) {
        case 1: placeOrder(); break;
        case 2: system.processNextOrder(); break;
        case 3: system.displayAllOrders(); break;
        case 4: system.cancelOrder(); break;
        case 5: std::cout << "Exiting system. Goodbye!" << std::endl; break;
        default: std::cout << "Invalid choice. Please try again." << std::endl;
    }
}

void MainMenu::placeOrder() {
    std::string customerName;
    int methodChoice;
    int numItems;
    std::vector<std::string> items;

    std::cout << "Enter customer name: ";
    std::cin >> customerName;
    std::cout << "Choose order method (1: DoorDash, 2: Phone, 3: Drive-Through, 4: Onsite): ";
    std::cin >> methodChoice;

    std::cout << "Enter number of items: ";
    std::cin >> numItems;
    std::cout << "Enter item names:\n";
    for (int i = 0; i < numItems; ++i) {
        std::string item;
        std::cin >> item;
        items.push_back(item);
    }

    double totalCost = numItems * 5.0; // Example price
    system.placeOrder(customerName, static_cast<OrderMethod>(methodChoice), items, totalCost);

    std::cout << "Order placed successfully! Order ID: " << system.getLastOrderID() << "\n";
}
