#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include "activation_functions/activation_tanh.h"
#include "derivatives_of_activation_functions/derivative_of_activation_tanh.h"

namespace
yamlp {

    class
    Perceptron {

        public:

            ActivationTanh
            act;

            DerivativeOfActivationTanh
            dact;

            double
            * neurons,
            bias;

            double
            ** weights;

        public:

            Perceptron(
                std::size_t const & p_numberOfNeurons,
                bool const & p_bias,
                Function const & p_activationFunction,
                Function const & p_derivativeOfActivationFunction
            );

            ~Perceptron();
    };
}
#endif