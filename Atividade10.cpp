#include <iostream>

bool isPrime(int num) {
    if (num <= 1) return false; 
    if (num == 2) return true;  
    if (num % 2 == 0) return false; 
    for (int i = 3; i * i <= num; i += 2) { 
        if (num % i == 0) return false;
    }
    return true;
}

int main () {
    long max = 2000000;
    long soma = 0;

    for (int i = 0; i <= max; i++)
    {
        if (isPrime(i))
        {
            soma += i;
        }
    }

    std::cout << "A soma dos primos é : " << soma << std::endl;
    
}