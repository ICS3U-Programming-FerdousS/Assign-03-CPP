// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April, 23, 2022
// This program asks the user length and width
// then if check if the shape is square or not
// and display the answer.


#include <iostream>
#include <cmath>
// include string
#include <string>

using std::cout;

int main() {
  // variables/float
  std::string length_string;
  float length_float;
  std::string width_string;
  float width_float;
  int counter = 0;
  std::string restart = "yes";

  // loop to restart the game
  while (restart == "yes" || restart == "yes") {
  // ask user for the length and width as strign
  std::cout << "enter the length of rectangle ";
  std::cin >> length_string;
  std::cout << "enter the width of rectangle ";
  std::cin >> width_string;
  // line space
  std::cout << "" << std::endl;
  // convert the string input to float
  try {
    length_float = std::stof(length_string);
    width_float = std::stof(width_string);
    counter = counter + 1;
    }
  // display invalid if input is not a number
  catch (std::invalid_argument) {
    std::cout <<"input was not an integer" << std::endl;
    }

  // check if the length is equal to length
  if (length_float == width_float && counter > 0) {
      counter = 0;
      std::cout << "Your shape is a square " << std::endl;
    } else if (length_float > width_float || length_float <
  width_float && counter > 0) {
    std::cout << "Your shape is a rectangle" << std::endl;
    counter = 0;
  }
  // ask the user if they want to restart the program
  std::cout <<
  "Want to restart? (type yes to restart/type no or any key to End) ";
  std::cin >> restart;
    }
  std::cout << ""<< std::endl;
  std::cout << "END"<< std::endl;
  std::cout << "Have A Good Day"<< std::endl;
  }
