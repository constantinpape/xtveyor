#include "xtveyor/xtveyor.hpp"
#include "xtensor/xarray.hpp"


int main() {
    const xt::xarray<int> r = xt::arange(0, 5);
    xtveyor::print_me(r);
    return 0;
}
