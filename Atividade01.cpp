#include <iostream>
#include <vector>

using namespace std;


// Multiples of 3 or 5

int main()
{
    int max = 1000;
    int soma = 0;

    vector<int> all = {};

    for (int i = 0; i < max; i++){
        if (i % 3 == 0 || i % 5 == 0){
            all.push_back(i);
        }

    }
    for (int i = 0; i < all.size(); i++){
        soma += all[i];
    }

    cout << "A soma de todos os multiplos de 3 e 5 meno que 1000 é: " << soma << endl;
}