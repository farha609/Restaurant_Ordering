cmake_minimum_required(VERSION 3.30)
project(untitled92)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled92 main.cpp
        Order.cpp
        OrderQueue.cpp
        OrderManager.cpp
        RestaurantSystem.cpp
        Kitchen.cpp
        ReceiptPrinter.cpp
)
