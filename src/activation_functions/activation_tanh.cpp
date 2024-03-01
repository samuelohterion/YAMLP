#include "activation_tanh.h"
#include <math.h>

namespace
yamlp {

    ActivationTanh::ActivationTanh() :
    Function() {

    }

    ActivationTanh::~ActivationTanh() {

    }

    double
    ActivationTanh::operator()(double const & p_net) {

        return tanh(p_net);
    }
}