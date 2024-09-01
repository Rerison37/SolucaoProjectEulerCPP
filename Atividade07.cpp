#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    if (num == 2) return true;  
    if (num % 2 == 0) return false; 
    for (int i = 3; i * i <= num; i += 2) { 
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> primo;
    int i = 2; 

    while (primo.size() < 10001) {
        if (isPrime(i)) {
            primo.push_back(i);
        }
        i++;
    }

    cout << primo.back();

    return 0;
}
