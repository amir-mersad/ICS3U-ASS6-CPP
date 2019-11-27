// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program calculates the volume of a cylinder

#include <iostream>
#include <cmath>
#include <iomanip>


main() {
    // This function gets the input and calls another function
    std::string side_str;
    std::string circular_str;
    int side;
    int circular;
    double result;

    // Input
    std::cout << "Please enter the radius of the semicuricular: ";
    std::cin >> circular_str;
    std::cout << "Please enter the length of the side"
                 "between the semicuriculars: ";
    std::cin >> side_str;
    try {
        side = std::stoi(side_str);
        circular = std::stoi(circular_str);
    } catch (std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
        return 0;
    }
    // Process and Output
    if (side > 0 && circular > 0) {
        result = pow(circular, 2) * M_PI + 2 * circular * side;
        std::cout << "The area of the stadium is approximately " << std::fixed
        << std::setprecision(2) << std::setfill('0')  << result << "m^2"
        << std::endl;
    } else {
        std::cout << "The input must be more than 0!" << std::endl;
    }
}
