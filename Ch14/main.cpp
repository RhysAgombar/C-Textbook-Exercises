#include <iostream>

#include "poly.h"

// Practice with Polymorphism!

void f(B2& b2) {
    b2.pvf();
};

int main() {

    /* Won't work now because of the pure virtual function (pvf)
    D1 d1;
    d1.vf();
    d1.f();

    B1& b1_ref(d1);
    b1_ref.vf();
    b1_ref.f();
    */

    D2 d2;
    d2.vf();
    d2.f();
    d2.pvf();

    D21 d21;
    D22 d22;

    f(d21);
    f(d22);

    std::cout << "\n";
    return 0;
};