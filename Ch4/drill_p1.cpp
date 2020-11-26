#include "std_lib_facilities.h"

int main() {

    vector<double> in_queue;
    double temp;

    cout << "Please input two numbers. \n";

    while (cin >> temp){
        in_queue.push_back(temp);
        if (in_queue.size() > 1){

            cout << "\nOut: ";

            if (in_queue[0] == in_queue[1]) cout << "\nThe numbers are Equal\n"; 
            else if (abs(in_queue[0] - in_queue[1]) <= 0.01) cout << "\nThe numbers are Almost Equal\n";
            else if (in_queue[0] < in_queue[1]) cout << "\nThe Smaller Value is: " << in_queue[0] 
                                                << ", The Larger Value is: " << in_queue[1] << "\n";
            else if (in_queue[0] > in_queue[1]) cout << "\nThe Smaller Value is: " << in_queue [1] << ", The Larger Value is: " 
                                                     << in_queue[0] << "\n"; 


            in_queue.clear();
        }; 
    };


}