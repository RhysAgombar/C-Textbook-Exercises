#include <iostream>


class my_vector {
    int sz;
    double* elem;
public:
    my_vector(int s) :sz{s}, elem{new double[s]}
    {
        for (int i = 0; i < s; i++){
            elem[i] = double(i);
        };
    }
    ~my_vector() {delete[] elem; std::cout << "Deleted!\n";} 

    int get_elem(int i) {return elem[i];}

};