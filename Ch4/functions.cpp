#include "std_lib_facilities.h"

void print_square(int v){
    // Yes, I know I should do v*v, but the book explicitly asked for this in the exercise.
    int sq {0};

    for (int i {0}; i <v; i++){
        sq += v;
    };

    cout << "\n" << sq << "\n";
}

int main() {
    print_square(5);
}