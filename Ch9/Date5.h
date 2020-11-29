#include "Month.h"
#include <iostream>

class Date5{
public:
    Date5(int yy, Month mm, int dd);
    int day() const;
    Month month() const;
    int year() const;

    void add_day(int n);
    void add_month(int n);
    void add_year(int n);
    bool is_valid();
private:
    int y;
    Month m;
    int d;
};

using namespace std;

ostream& operator<<(ostream& os, const Date5& d);