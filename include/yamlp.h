#ifndef YAMLP
#define YAMLP

#include "perceptron.h"

namespace
yamlp {

    class YaMLP {

        public:

            yamlp::Perceptron
            * input,
            ** hidden,
            * output;
        
        public:

            YaMLP();

            ~YaMLP();
    };
}
#endif
