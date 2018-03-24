#ifndef WCOSA_PACKAGE_GOOD_PACKAGE
#define WCOSA_PACKAGE_GOOD_PACKAGE

namespace wlp {

    template<
        typename comp_t, 
        comp_t a, 
        comp_t b
    >
    struct are_equal {
        constexpr bool value = a == b;
    };

}

#endif

