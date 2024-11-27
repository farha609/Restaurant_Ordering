//
// Created by SYED FAZIL on 27-11-2024.
//

#ifndef UNTITLED89_MAINMENU_H
#define UNTITLED89_MAINMENU_H

#include "RestaurantSystem.h"

class MainMenu {
private:
    RestaurantSystem system;

public:
    void start();
    void displayMenu();
    void handleChoice(int choice);
    void placeOrder();
};

#endif //UNTITLED89_MAINMENU_H
