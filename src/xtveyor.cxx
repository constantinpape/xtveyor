#include "xtensor/xtensor.hpp"
#include "xtveyor/xtveyor.hpp"


int main() {
    const xt::xtensor<int, 5> r = xt::arange(0, 5);
    xtveyor::print_me(r);
    return 0;
}
