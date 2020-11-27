#include "std_lib_facilities.h"

int main() {

    vector<double> in_queue;
    double temp;

    cout << "Please begin inputting numbers followed by their unit (cm, m, ft, yrd). \n";

    double largest {0.0};
    double smallest {1e9};
    double sum_meters {0.0};
    int num_inputs {0};

    while (cin >> temp){
        string unit{" "};
        cin >> unit;

        if (unit != "cm" && unit != "m" && unit != "ft" && unit != "yrd") {
            cout << "\n Invalid Unit. Discarding entry.\n";
            continue;
        };

        num_inputs++;

        if (unit == "cm") temp /= 100;
        if (unit == "ft") temp *= 0.3048;
        if (unit == "yrd") temp *= 0.9144;

        if (temp > largest) {
            largest = temp;
        };
        if (temp < smallest) {
            smallest = temp;
        };

        sum_meters += temp;
        in_queue.push_back(temp);

        cout << "\nThe smallest so far: " << smallest << "\nThe largest so far: " 
             << largest << "\nThe sum so far: " << sum_meters << "\n";

    };

    cout << "\nTotal # of Inputs: " << num_inputs <<"\nThe smallest: " << smallest 
         << "\nThe largest: " << largest << "\nThe sum: " << sum_meters << "\n";

    cout << "\nThe final vector: ";

    sort(in_queue);

    for (double n : in_queue){
        cout << n << " ";
    }; 
    cout << "\n";

}