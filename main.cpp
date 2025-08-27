#include "greet.hpp"
#include <vector>

int main() {
    std::vector<Greet> greetings = {
            {"Ola", "Nordman", "Hello"},
            {"Greta", "Thundberg", "Hello"},
            {"Lars", "Ivar", "Hello"}
    };

    for (const auto& g : greetings) {
        g.print();
    }

    return 0;
}
