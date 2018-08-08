#include "xtveyor/xtveyor.hpp"
#include "xtensor/xarray.hpp"


int main() {
    std::vector<int> buf(25);
    std::iota(buf.begin(), buf.end(), 0);
    xt::xarray<int> a = xt::zeros<int>({5, 5});
    xtveyor::copyBufferToView(buf, a, a.strides());
    xtveyor::print_me(a);
    return 0;
}
