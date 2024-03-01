# YAMLP
yet another mlp

YAMLP is an open source project to develop an easy handable Multilayer Perceptron in c++.

## Main classes overview

### YaMLP
YaMLP is the main class of the project. It provides after construction an empty container,
that has to be filled with several kind of layers the so called perceptrons.

### Perceptron
Perceptron is the container class for one layer.
It contains a number of neurons for that one has to configure an activation function, the derivative of the activation function and a bias.

### Activation Functions
There is a set of several activation functions for one perceptron and for each its derivative function.


## First simple example

**main.cpp**
```
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
```

### Classes in detail

### YaMLP
#### constructor
```
    yamlp::YaMLP yamlp = yamlp::YaMLP();
```
or shorter:
```
    yamlp::YaMLP yamlp;
```
