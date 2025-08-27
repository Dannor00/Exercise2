#include "person.hpp"

Person::Person(const std::string& firstName, const std::string& lastName)
        : firstName(firstName), lastName(lastName) {}

void Person::print() const {
    std::cout << firstName << " " << lastName << std::endl;
}

std::string Person::getFullName() const {
    return firstName + " " + lastName;
}
