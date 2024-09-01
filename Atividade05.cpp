#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int result = 1;
    
    for (int i = 2; i <= 20; ++i) {
        result = lcm(result, i);
    }

    std::cout << "O menor número que é divisível por todos os números de 1 a 20 é: " << result << std::endl;

    return 0;
}
