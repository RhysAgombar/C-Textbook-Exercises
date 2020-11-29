#include "Month.h"
#include <iostream>

class Date4{
public: 
    Date4(int y, Month m, int d);
    void add_day(int n);

    int year() {return y; }
    Month month() { return m; }
    int day() {return d; }

    bool is_valid();

private:
    int y;
    Month m;
    int d;
};

using namespace std;

ostream& operator<<(ostream& os, Date4& d);