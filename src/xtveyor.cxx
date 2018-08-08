#include "xtveyor/xtveyor.hpp"
#include "xtensor/xarray.hpp"


int main() {
    //
    std::vector<int> buf(25);
    std::iota(buf.begin(), buf.end(), 0);
    xt::xarray<int> a = xt::zeros<int>({5, 5});
    xtveyor::copyBufferToView(buf, a, a.strides());
    xtveyor::print_me(a);
    //
    xt::slice_vector slice;
    const std::vector<size_t> offset = {2, 2};
    const std::vector<size_t> shape = {2, 2};
    xtveyor::sliceFromRoi(slice, offset, shape);
    auto b = xt::strided_view(a, slice);

    std::vector<int> buff = {42, 42, 42, 42};
    xtveyor::copyBufferToView(buff, b, a.strides());
    xtveyor::print_me(b);
    return 0;
}
