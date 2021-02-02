//
//  review 9.cpp
//  kill
//
//  Created by mathius b on 10/27/20.
//

#include <iostream>

using namespace std;

int main()
{
    float a;
    float max = 0;

    cout << "Enter in a number: ";
    cin >> a;
    
    while (a != -666) {
        cout << "Enter another number (enter -666 to end run): ";
        cin >> a;
    
        if (a > max)
        max = a;
    }
    
    cout << endl << "The lagest number you have entered is "<<  max << ".\nHave a good day!" << endl;
    
    return 0;
}
