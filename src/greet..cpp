//
// Created by Danie on 25.08.2025.
//

#include "greet.hpp"
#include <iostream>

Greet::Greet(const Person& p, const std::string& greeting)
        : person(p), greeting(greeting) {}

Greet::Greet(const std::string& firstName, const std::string& lastName, const std::string& greeting)
        : person(firstName, lastName), greeting(greeting) {}

void Greet::print() const {
    std::cout << greeting << ", " << person.getFullName() << std::endl;
}
