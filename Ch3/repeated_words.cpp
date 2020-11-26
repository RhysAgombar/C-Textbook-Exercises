#include "std_lib_facilities.h"

int main(){

    string previous = "";
    string current;

    cout << "Please begin typing some words. Press Ctrl+D to finish.\n";

    while (cin >> current){
        if (previous == current){
            cout << "Repeated Word: " << current << '\n';
        }
        previous = current;
    }
    
    keep_window_open(); 
    return 0;
}