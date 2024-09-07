#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int sum_squares = 0;
    int square_sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum_squares += i * i;
    }

    for (int j = 1; j <= 100; j++)
    {
        square_sum += j;
    }

    square_sum = square_sum * square_sum;
    int diference = square_sum - sum_squares;
    
    cout << "soma dos quadrados dos primeiros cem números naturais e o quadrado da soma: " << diferenca << endl;
    
}