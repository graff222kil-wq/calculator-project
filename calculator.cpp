#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::cout << "5 + 3 = " << sum(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    return 0;
}