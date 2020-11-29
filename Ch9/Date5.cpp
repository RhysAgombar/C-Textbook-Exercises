using namespace std;
#include <iostream>
#include "Date5.h"

bool Date5::is_valid() {
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

Date5::Date5(int yy, Month mm, int dd) : y{yy}, m{mm}, d{dd}
{
    if (!is_valid()){
        throw invalid_argument("Invalid Date!");
    };
};

int Date5::year() const{
    return y;
};

Month Date5::month() const{
    return m;
};

int Date5::day() const{
    return d;
};

void Date5::add_day(int n){
    if ((d + n) > 31){
        throw invalid_argument("Invalid Day!");
    } else {
        d += n; // This is very primitive, but as per the drill's instruction, is fine for now.
    }
};

void Date5::add_month(int n){
    m += n; // No error checking because Months always wrap around.
};

void Date5::add_year(int n){
    if (y + n <= 0){
        throw invalid_argument("Invalid Year!");
    } else {
        y += n;
    }
};

ostream& operator<<(ostream& os, const Date5& d){
    return os << '(' << d.year() << ',' << int(d.month()) << ',' << d.day() << ')';
}