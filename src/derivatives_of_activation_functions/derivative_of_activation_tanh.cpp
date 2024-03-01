#include "derivatives_of_activation_functions/derivative_of_activation_tanh.h"

namespace
yamlp {

    DerivativeOfActivationTanh::DerivativeOfActivationTanh() :
    Function() {

    }

    DerivativeOfActivationTanh::~DerivativeOfActivationTanh() {

    }

    double
    DerivativeOfActivationTanh::operator()(double const & p_net) const {

        double
        tanh_net = tanh(p_net);

        return 1. - tanh_net * tanh_net;
    }
}