#include "Month.h"
#include "Date5.h"
#include "Date4.h"
#include "Date3.h"
#include <iostream>

/*
I've got three implemented, I don't think implementing these last two is a productive use of my time.
I already understand the coding methods and the pitfalls of using ints instead of enums, etc. 
 
struct Date1 {
    int y;  // year
    int m;  // month
    int d;  // day
};

struct Date2 {
    int y, m, d;
    Date2(int y, int m, int d);
    void add_day(int n);
};
 */


using namespace std;

int main(){


    cout << "Date3: \n";

    Date3 today3{1978, 6, 25};
    Date3 tomorrow3{today3};
    tomorrow3.add_day(1);
    
    cout << "\n" << today3;
    cout << "\n" << tomorrow3;
    cout << "\n\n";

    //Date3 invalid_day3{1978, 6, 234}; 

    // Date3 invalid_tomorrow3{1978, 6, 25};
    // invalid_tomorrow3.add_day(23);
    
    // Date3 invalid_month3{1978, 23, 25}; 

    // Date3 invalid_year3{-2323, 6, 25};


    cout << "Date4: \n";

    Date4 today4{1978, Month::jun, 25};
    Date4 tomorrow4{today4};
    tomorrow4.add_day(1);
    
    cout << "\n" << today4;
    cout << "\n" << tomorrow4;
    cout << "\n\n";

    // Date4 invalid_day4{1978, Month::jun, 234}; 

    // Date4 invalid_tomorrow4{1978, Month::jun, 25};
    // invalid_tomorrow4.add_day(23);
    
    // Date4 invalid_month4{1978, Month(23), 25}; 

    // Date4 invalid_year4{-2323, Month::jun, 25};


    cout << "Date5: \n";

    Date5 today5{1978, Month::jun, 25};
    Date5 tomorrow5{today5};
    tomorrow5.add_day(1);
    
    cout << "\n" << today5;
    cout << "\n" << tomorrow5;
    cout << "\n\n";

    //Date5 invalid_day5{1978, Month::jun, 234};

    // Date5 invalid_tomorrow5{1978, Month::jun, 25};
    // invalid_tomorrow5.add_day(23);
    
    // Date5 invalid_month5{1978, Month(23), 25};

    // Date5 invalid_year5{-2323, Month::jun, 25};

};