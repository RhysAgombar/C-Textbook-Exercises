#include "std_lib_facilities.h"

/*
There are a lot of other exercises in this chapter, but again - all review, and all very simple. I'm skipping them until we get into 
the more complicated stuff that I *likely* still remember, but want to be sure I fully understand. Like the intricacies of pointer 
arithmetic!~
*/

int main(){

    cout << "Please enter your First Name.\n";
    string f_name {""};
    cin >> f_name;

    cout << "\nDear " << f_name << ", \nHow are you doing? I'm fine. I miss you. " 
    << "The exercise tells me to add more text but I already know this, so this is all you get.\n";

    cout << "\nPlease enter a friend's Name and Gender.\n";
    string friend_name {""};
    char friend_gender {' '};
    cin >> friend_name >> friend_gender;

    if (friend_gender == 'm'){
        cout << "\nIf you see " << friend_name << " please ask him to call me.\n";
    } else if (friend_gender == 'f') {
        cout << "\nIf you see " << friend_name << " please ask her to call me.\n";
    } else {
        cout << "\nIf you see " << friend_name << " please ask them to call me.\n";
    }

    cout << "\nPlease enter your age.\n";
    int age {25};
    cin >> age;

    if (age >= 110 || age <= 0){
        simple_error("You're Kidding!");
    }

    cout << "\nI heard you just had a birthday and are " << age << " years old.";

    if (age < 12){
        cout << "\nNext year you will be " << age+1 << ".\n";
    } else if (age > 70){
        cout << "\nI hope you are enjoying your retirement.\n";
    } else if (age == 17){
        cout << "\nNext year you will be able to vote.\n";
    }

    cout << "\nYours sincerely,\n\n\nRhys Agombar\n";

    keep_window_open(); 
    return 0;
}