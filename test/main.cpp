#include <wcosa-package/GoodPackage.h>
#include <iostream>

int main(int argc, char *argv[]) {
    return wlp::are_equal<int, 5, 10>::value;
}

