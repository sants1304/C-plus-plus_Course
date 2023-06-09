#include <iostream>
#include <vector>

void primeFactors(int n) {
    // Almacenar los factores primos en un vector
    std::vector<int> factors;

    // Dividir n entre 2 hasta que sea impar
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    // n es impar en este punto, comenzamos a partir de 3 y solo comprobamos números impares
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    // Si n es mayor que 2, entonces n es primo
    if (n > 2) {
        factors.push_back(n);
    }

    // Mostrar los factores primos
    std::cout << "Factores primos: ";
    for (int i = 0; i < factors.size(); ++i) {
        std::cout << factors[i];
        if (i != factors.size() - 1) {
            std::cout << " x ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> num;

    if (num < 2) {
        std::cout << "El número debe ser mayor o igual a 2." << std::endl;
        return 0;
    }

    primeFactors(num);

    return 0;
}
