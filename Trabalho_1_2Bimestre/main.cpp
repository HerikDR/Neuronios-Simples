#include "neuronio.hpp"
#include <iostream>

int main() {
    std::vector<double> entrada1 = {0.1, 2.0};
    std::vector<double> entrada2 = {1.5, 3.7};

    NeuronioReLU neuronio1({0.2, 0.4}, -1.5); // entrada 1
    NeuronioReLU neuronio2({0.2, 0.4}, -0.5); // entrada 1

    NeuronioReLU neuronio3({1.2, 0.8}, -3.7); // outros valores
    NeuronioReLU neuronio4({3.5, 1.5}, -2.3); // outros valores

    double resultado1, resultado2, resultado3, resultado4;

    neuronio1.predict(entrada1, resultado1); // entrada 1
    neuronio2.predict(entrada1, resultado2); // entrada 1
    
    neuronio1.predict(entrada2, resultado3); // entrada 2
    neuronio2.predict(entrada2, resultado4); // entrada 2

    std::cout << "Primeira saída de teste: " << resultado1 << "\n";
    std::cout << "Segunda saída de teste: " << resultado2 << "\n";

    std::cout << "Primeira saída de outros valores: " << resultado3 << "\n";
    std::cout << "Segunda saída de outros valores: " << resultado4 << "\n";

    return 0;
}
