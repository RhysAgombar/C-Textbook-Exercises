#include <iostream>

class Date3{
    int y, m, d;
public: 
    Date3(int y, int m, int d);
    void add_day(int n);
    
    int year() {return y; }
    int month() { return m; }
    int day() {return d; }

    bool is_valid();
};


using namespace std;

ostream& operator<<(ostream& os, Date3& d);