#include "std_lib_facilities.h"

int main(){
    string first_name;
    double age;
    
    cout << "Please enter your First Name and Age.\n";
    cin >> first_name;
    cin >> age;

    cout << "Hello, " << first_name << " (" << age * 12 << " months).\n";

    keep_window_open(); 
    return 0;
}