using namespace std;
#include <iostream>
#include "Date4.h"

bool Date4::is_valid() {
    if (y <= 0 || y > 2100){  // Support only dates between 1 and 2100
        throw invalid_argument("Invalid Year!");
        return false;
    }
    if (int(m) < 1 || int(m) > 12){
        throw invalid_argument("Invalid Month!");
        return false;
    }
    if (d > 31 || d < 1) {  // Since this is just a simple exercise, assume all months are 31 days long. 
        throw invalid_argument("Invalid Day!");
        return false;
    }
    return true;
};

Date4::Date4(int yy, Month mm, int dd) : y{yy}, m{mm}, d{dd}
{
    if (!is_valid()){
        throw invalid_argument("Invalid Date!");
    };
};

void Date4::add_day(int n){
    if ((d + n) > 31){
        throw invalid_argument("Invalid Day!");
    } else {
        d += n; // This is very primitive, but as per the drill's instruction, is fine for now.
    }
};

ostream& operator<<(ostream& os, Date4& d){
    return os << '(' << d.year() << ',' << int(d.month()) << ',' << d.day() << ')';
}