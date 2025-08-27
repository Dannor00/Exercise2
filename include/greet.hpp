#ifndef EXERCISE2_GREET_HPP
#define EXERCISE2_GREET_HPP

#include "person.hpp"
#include <string>

class Greet {
private:
    Person person;
    std::string greeting;

public:
    Greet(const Person& p, const std::string& greeting);

    Greet(const std::string& firstName, const std::string& lastName, const std::string& greeting);

    void print() const;
};

#endif //EXERCISE2_GREET_HPP
