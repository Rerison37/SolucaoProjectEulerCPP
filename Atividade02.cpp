#include <iostream>

using namespace std;

// Fibonnaci even-valued sum

int main() {
    int max = 4000000;
    int soma = 0;
    
    int a = 1; 
    int b = 2; 
    
    while (a <= max) {
        if (a % 2 == 0) {
            soma += a;
        }
        int next = a + b;
        a = b;
        b = next;
    }

    cout << "Sum of even Fibonacci numbers up to " << max << " is: " << soma << endl;

    return 0;
}
