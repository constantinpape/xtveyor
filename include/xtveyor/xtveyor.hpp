#include <iostream.h>
#include "xtensor/xtensor.hpp"

namespace xtveyor {

    template<class ARRAY>
    void print_me(const ARRAY & arr) {
        for(auto it = arr.begin(); it != arr.end(); ++it) {
            std::cout << *it << std::endl;
        }
    }
}
