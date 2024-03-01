#ifndef DERIVATIVE_OF_ACTIVATION_TANH_H
#define DERIVATIVE_OF_ACTIVATION_TANH_H

#include <math.h>
#include "function.h"

namespace
yamlp {

    class
    DerivativeOfActivationTanh :
    public Function {

        public:

            DerivativeOfActivationTanh();

            ~DerivativeOfActivationTanh();

        public:

            double
            operator()(double const & p_net) const;
    };
}
#endif
