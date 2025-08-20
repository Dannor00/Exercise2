//
// Created by Danie on 20.08.2025.
//

#ifndef EXERCISE1_PERSON_H
#define EXERCISE1_PERSON_H

#include <string>
#include <iostream>

class Person {
public:
    std::string firstName;
    std::string lastName;

    Person(const std::string& firstName, const std::string& lastName)
            : firstName(firstName), lastName(lastName) {}

    void print() const {
        std::cout << "First name: " << firstName
                  << ", Last name: " << lastName << std::endl;
    }

    std::string getFullName() const {
        return firstName + " " + lastName;
    }
};

#endif // EXERCISE1_PERSON_H
