#include <iostream>

#include "poly.h"

using namespace std;

void B1::vf() {
    cout << "\nB1::vf()";
};

void B1::f() {
    cout << "\nB1::f()";
};

void D1::vf() {
    cout << "\nD1::vf()";
};  

void D1::f(){
    cout << "\nD1::f()";
};

/*
void D2::vf() {
    cout << "\nD2::vf()";
};  

void D2::f(){
    cout << "\nD2::f()";
};
*/

void D2::pvf() {
    cout << "\nD2::pvf()";
};  

void D21::pvf() {
    cout << "\n" << D21::st;
};

void D22::pvf() {
    cout << "\n" << D22::st;
};