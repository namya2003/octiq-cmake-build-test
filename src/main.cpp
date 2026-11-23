#include <iostream>

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int divide(int a, int b) { return a / b; }

int main() {
    std::cout << add(2, 3) << '\n';
    std::cout << subtract(5, 3) << '\n';
    std::cout << divide(10, 2) << '\n';
    return 0;
}
