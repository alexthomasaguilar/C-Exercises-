/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 12, 2015, 12:34 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    cout << "Enter 10 values.\n";

    for (int x = 0; x < 10; x++) {
        int userValue;

        cout << "Please enter a value: ";
        cin >> userValue;
        cout << "(" << x+1 << ") Your value is: " << userValue << endl;
    }



    return 0;
}

