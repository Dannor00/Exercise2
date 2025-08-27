#ifndef EXERCISE1_PERSON_H
#define EXERCISE1_PERSON_H

#include <string>
#include <iostream>
#include <vector>

class Person {
public:
    std::string firstName;
    std::string lastName;

    Person(const std::string& firstName, const std::string& lastName);
            void print() const;
    std::string getFullName() const;
};

#endif // EXERCISE1_PERSON_H
