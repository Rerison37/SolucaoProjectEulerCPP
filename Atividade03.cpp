#include <iostream>

using namespace std;

int main() {
    long long number = 600851475143;
    long long largestPrime = 0;
    long long factor = 2;

    while (factor * factor <= number) {
        if (number % factor == 0) {
            largestPrime = factor;
            number /= factor;
        } else {
            factor++;
        }
    }

    if (number > 1) {
        largestPrime = number; 
    }

    cout << "O maior fator primo de 600851475143 é: " << largestPrime << endl;

    return 0;
}
