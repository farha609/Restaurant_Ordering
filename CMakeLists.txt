cmake_minimum_required(VERSION 3.30)
project(untitled89)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled89 main.cpp
        RestaurantSystem.h
        Order.cpp
        MainMenu.h
        MainMenu.cpp
        RestaurantSystem.cpp
        OrderQueue.cpp)
