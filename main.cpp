//
// Created by Danie on 20.08.2025.
//
#include "Person.h"

int main() {
    Person p("Ola", "Normann");
    p.print();
    std::cout << "Full name: " << p.getFullName() << std::endl;
    return 0;
}

