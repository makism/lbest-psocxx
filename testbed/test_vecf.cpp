#include "lbest-psocxx.h"
#include <iostream>

int main(int argc, char** argv) {
    vecf a(3);
    a[0] = 1.0f;
    a[1] = 1.0f;
    a[2] = 1.0f;

    vecf b(3);
    b[0] = 2.0f;
    b[1] = 2.0f;
    b[2] = 2.0f;

    vecf c = a - b;
    c *= 10.0f;

    std::cout << c << std::endl;

    return 0;
}
