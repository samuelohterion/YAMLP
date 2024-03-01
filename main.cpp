#include <iostream>
#include "include/yamlp.h"

int
main() {

    std::cout << "YAMLP" << std::endl;

    yamlp::YaMLP
    yamlp = yamlp::YaMLP(
    );

    yamlp::ActivationTanh
    layerInputAct;

    yamlp::DerivativeOfActivationTanh
    layerInputDAct;

    yamlp::Perceptron
    layerInput = yamlp::Perceptron(
        10,                 // 10 neurons
        1,                  // 1 bias neuron
        layerInputAct,      // activation function for input layer
        layerInputDAct      // derivative of activation function for input layer
    );

    yamlp::Perceptron
    layerHidden1 = yamlp::Perceptron(
        10,                 // 10 neurons
        1,                  // 1 bias neuron
        layerInputAct,      // activation function for input layer
        layerInputDAct      // derivative of activation function for input layer
    );

    yamlp::Perceptron
    layerHidden2 = yamlp::Perceptron(
        10,                 // 10 neurons
        1,                  // 1 bias neuron
        layerInputAct,      // activation function for input layer
        layerInputDAct      // derivative of activation function for input layer
    );


    return 0;
}