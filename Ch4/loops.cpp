#include "std_lib_facilities.h"

int main() {
    // Intended to print every lower-case letter, and its integer equivalent beside it in the terminal. 

    char cur_char {'a'};

    int count {0};
    while (count < 26){
        cout << char(cur_char + count) << " " << int(cur_char + count) << "\n";
        count++;
    }
    
    for (int for_count {0}; for_count < 26; for_count++){
        cout << char(cur_char + for_count) << " " << int(cur_char + for_count) << "\n";
    }
}