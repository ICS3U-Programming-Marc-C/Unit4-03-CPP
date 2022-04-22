// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April, 2022
// Number square

#include <iostream>
#include <cmath>

int main() {
  // declaring variables
  int loop_counter;
  int userInt;
  std::string userNum;

  // get the user number as a string
  std::cout << "Enter a whole number: ";
  std::cin >> userNum;
  std::cout << std::endl;

  try {
       // Casting to int
       userInt = std::stoi(userNum);
       // The user entered a negative number
       if (userInt < 0) {
              std::cout << "Invalid input.\n";
              std::exit(EXIT_FAILURE);
       } for (loop_counter=0; loop_counter <= userInt; loop_counter++) {
       std::cout << loop_counter << "^2 = " << pow(loop_counter, 2) << "\n";
       }

       // display the thank you message
       std::cout << "\nThanks for playing!";
       } catch (std::invalid_argument) {
      // The user did not enter a number
      std::cout << "Invalid input.\n";
      std::exit(EXIT_FAILURE);
}
}
