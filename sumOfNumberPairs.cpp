// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/5/2023
// This program will generate all
// the positive 2 digit number pairs
// of the number chosen by the user.
#include <iostream>

int main() {
    // Explaining my program to the user.
    std::cout << "Welcome to my program in C++.";
    std::cout << " It will generate all the positive 2 digits number pairs,";
    std::cout << "that have a sum of a number of your choice between 20 ";
    std::cout << "and 100.\n";

    // Initiating variable for user input.
    std::string numberAsString;

    // Getting user number as as string.
    std::cout << "Please enter an integer of your choice: ";
    std::cin >> numberAsString;

    // Initiating try catch to catch any errors.
    try {
        // Converting user's input variable
        // from a float to a string.
        float numberAsFloat = std::stof(numberAsString);

        // Converting user's input variable
        // from a string to an integer.
        int numberAsInteger = std::stoi(numberAsString);
        // If statement to verify that the number
        // entered by the user is between the
        // range 20 and 100.

        // If statement to not allow for decimal input.
        if (numberAsFloat != numberAsInteger) {
            std::cout << numberAsFloat << " is an invalid input.";
        // Else if checking to see if the user's
        // input is within the range 20 to 100.
        } else if (numberAsInteger >= 20 && numberAsInteger <= 100) {
                // First for loop which will increment
                // counter1 (first number displayed).

                for (int counter1 = 10; counter1 <= 100; counter1++) {
                    // Second for loop (nested loop) which will
                    // increment counter2 (second number displayed).
                    for (int counter2 = numberAsInteger - counter1;
                         counter2 >= 10; counter2--) {
                        // If statement to see if both counter's
                        // added together equal the number the user inputs.
                        if (counter1 + counter2 == numberAsInteger) {
                            std::cout << counter1 << " + "
                                      << counter2 << " = "
                                      << numberAsInteger << "\n";
                        }
                    }
                }
                // Else tell the user that their
                // number is not within the range 20 to
                // 100.
            } else {
                std::cout <<
                "This number is not within the range of numbers 20 to 100.";
            }

            // Catching any errors.
        }
        catch (std::invalid_argument) {
            std::cout << numberAsString << " is an invalid input.";
        }
}
