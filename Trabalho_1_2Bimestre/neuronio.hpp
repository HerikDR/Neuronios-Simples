#ifndef CDIA_HPP
#define CDIA_HPP

#include <vector>
#include <iostream>

class Neuronio {
public:
    virtual ~Neuronio() = default;
    virtual void predict(const std::vector<double>& entrada, double& saida) const = 0;
};

class NeuronioReLU : public Neuronio {
private:
    std::vector<double> pesos;
    double bias;

public:
    NeuronioReLU(const std::vector<double>& p, double b) {
        pesos = p;
        bias = b;
    }

    void predict(const std::vector<double>& entrada, double& saida) const override {
        double soma = bias;
        for (size_t i = 0; i < pesos.size(); i++){ // o for percorre todo os pesos, é utilizado o size_t e o .size() para descobrir o tamanho
            soma = soma + (entrada[i] * pesos[i]);
        }
        if (soma < 0) {
            saida = 0;
        } else {
            saida = soma;
        }
    }
};

#endif
