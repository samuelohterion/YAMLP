#ifndef ACTIVATIONTANH_H
#define ACTIVATIONTANH_H

#include "function.h"

namespace
yamlp {
    
    class
    ActivationTanh :
    public Function {

        public:

            ActivationTanh();

            ~ActivationTanh();

        public:

            double
            operator()(double const & p_net);
    };
}
#endif