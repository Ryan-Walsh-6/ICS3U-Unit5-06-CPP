// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 11 2021
// this program rounds a number to the decimal places entered by the user

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

double decimal_converter(double &decimal_from_user,
                         int decimal_places_from_user) {
    // calculates volume
    int decimal_places_from_user_two;

    // process & output
    decimal_from_user = decimal_from_user * pow(10, decimal_places_from_user);
    decimal_places_from_user_two = decimal_from_user + 0.5;
    decimal_from_user = decimal_places_from_user_two / pow
    (10, decimal_places_from_user);
}

int main() {
// this program rounds a number to the decimal places entered by the user
    std::string decimal_from_user_string;
    std::string decimal_places_from_user_string;
    double decimal_from_user;
    int decimal_places_from_user;

    while (true) {
        try {
            std::cout << "Enter the number you want to round: ";
            std::cin >> decimal_from_user_string;
            decimal_from_user = std::stod(decimal_from_user_string);
            std::cout << "Enter how many deciaml places you want to round by: ";
            std::cin >> decimal_places_from_user_string;
            std::cout << "" << std::endl;
            decimal_places_from_user = std::stoi
            (decimal_places_from_user_string);
            if (decimal_places_from_user < 0) {
            std::cout << "The amount of deciaml places must be above 0";
            std::cout << "" << std::endl;
            } else {
                break;
            }
        }catch (std::invalid_argument) {
            std::cout << "Please enter a valid number." << std::endl;
            std::cout << "" << std::endl;
        }
    }

    // call functions
    decimal_converter(decimal_from_user, decimal_places_from_user);

    std::cout << "The rounded number is " << decimal_from_user << std::endl;
}
