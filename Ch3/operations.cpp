#include "std_lib_facilities.h"

int main(){

    cout << "Please enter a number.\n";
    int n;
    cin >> n;

    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\n3*n == " << n*3
         << "\nn squared == " << n*n
         << "\nhalf of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << "\nn%3 == " << n%3
         << '\n';  

    keep_window_open(); 
    return 0;
}