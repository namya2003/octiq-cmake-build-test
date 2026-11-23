#include <iostream>

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int div(int a, int b) { return a / b; }

int main() {
    std::cout << add(2, 3) << '\n';
    std::cout << sub(5, 3) << '\n';
    std::cout << div(10, 2) << '\n';
    return 0;
}
