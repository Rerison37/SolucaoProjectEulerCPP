#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkPalindrome(int num) {
    string str = to_string(num);
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    vector<int> palindromes;
    int max = 1000;
    int soma = 0;

    for (int i = 100; i < max; i++) {
        for (int j = 100; j < max; j++) { 
            soma = j * i;
            if (checkPalindrome(soma)) {
                cout << i << " x " << j << " = " << soma << endl;
                palindromes.push_back(soma);
            }
        }
    }

    int largestPalindrome = 0;
    for (int num : palindromes) {
        if (num > largestPalindrome) {
            largestPalindrome = num;
        }
    }

    cout << "O maior palíndromo é: " << largestPalindrome << endl;

    return 0;
}
