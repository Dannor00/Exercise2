//
// Created by Danie on 25.08.2025.
//

#ifndef EXERCISE2_GREET_HPP
#define EXERCISE2_GREET_HPP

#include "person.hpp"
#include <string>

class Greet {
private:
    Person person;
    std::string greeting;

public:
    // Constructor with Person
    Greet(const Person& p, const std::string& greeting);

    // Constructor with first/last name
    Greet(const std::string& firstName, const std::string& lastName, const std::string& greeting);

    // Method to print the greeting
    void print() const;
};

#endif //EXERCISE2_GREET_HPP
