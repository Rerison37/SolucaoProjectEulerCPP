#include <iostream>
#include <cmath>

int contarDivisores(int n) {
    int contagem = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            contagem += 2; 
            if (i * i == n) {
                contagem--; 
            }
        }
    }
    return contagem;
}

int primeiroTriangularComMaisDe500Divisores() {
    int n = 1;
    while (true) {
        long long numeroTriangular = n * (n + 1) / 2;

        int divisores = contarDivisores(numeroTriangular);

        if (divisores > 500) {
            return numeroTriangular;
        }
        n++;
    }
}

int main() {
    int resultado = primeiroTriangularComMaisDe500Divisores();
    std::cout << "O primeiro número triangular com mais de 500 divisores é: " << resultado << std::endl;
    return 0;
}
