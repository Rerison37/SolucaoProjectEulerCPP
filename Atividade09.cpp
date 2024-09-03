#include <iostream>

int main() {
    int a, b, c;
    for (a = 1; a < 1000; ++a) {
        for (b = a + 1; b < 1000; ++b) {
            c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                std::cout << "O triplo pitagórico é: " << a << ", " << b << ", " << c << std::endl;
                std::cout << "O produto abc é: " << a * b * c << std::endl;
                return 0;
            }
        }
    }
    return 0;
}
