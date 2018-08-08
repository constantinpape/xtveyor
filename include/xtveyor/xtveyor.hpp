#include <iostream>
#include "xtensor/xarray.hpp"
#include "xtensor/xadapt.hpp"
#include "xtensor/xstrided_view.hpp"

namespace xtveyor {

    template<class ARRAY>
    void print_me(const ARRAY & arr) {
        for(auto it = arr.begin(); it != arr.end(); ++it) {
            std::cout << *it << std::endl;
        }
    }
}
