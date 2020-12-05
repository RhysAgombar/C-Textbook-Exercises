#include "cd_practice.h"
#include <iostream>

void destructor_scope_test(int sz=6){
    my_vector mv(sz);

    std::cout << "\nMy Vector Has Been Initialized! Now it must be Destroyed!\n";

};


int main(){

    int sz = 6;
    my_vector mv(sz);  
    double test{0.0};

    destructor_scope_test();

    std::cout << "\n" << sizeof(mv) << "\n";
    for (int i = 0; i < sz; i++){
        test = mv.get_elem(i);
        std::cout << test << "\n";
    }

    return 0;
}