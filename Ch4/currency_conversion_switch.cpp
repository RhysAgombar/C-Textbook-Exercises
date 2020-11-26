#include "std_lib_facilities.h"

int main() {
    // Using Canadian Dollars because that's just how I roll.
    constexpr float yen_2_dollars {0.012};
    constexpr float krone_2_dollars {0.15};
    constexpr float pounds_2_dollars {1.74};

    cout << "\nPlease input the currency you'd like to convert to dollars. (y)en, (k)rone, or (p)ounds.\n";
    char curr {' '};
    cin >> curr;

    cout << "\nPlease input the amount you wish to convert to dollars.\n";
    float amount {0.0};
    cin >> amount;

    switch (curr) {
        case 'y':        
            cout << "\nAmount in Dollars: " << amount * yen_2_dollars << "\n";
            break;
        case 'k':
            cout << "\nAmount in Dollars: " << amount * krone_2_dollars << "\n";
            break;
        case 'p':
            cout << "\nAmount in Dollars: " << amount * pounds_2_dollars << "\n";
            break;
        default:
            cout << "\nInvalid Currency\n";
            break;
    }

        
}