#include "Month.h"

Month operator+=(Month& m, int n){
    int val = int(m)+n; // integer value of the months being added
    m = (val > int(Month::dec)) ? Month(val%12) : Month(val);  
    // If the value is greater than 12 (the value for dec), 'wrap around' by taking mod12 to get the remainder. 
    // Eg. (13 -> 1 -> jan)

    return m;
};