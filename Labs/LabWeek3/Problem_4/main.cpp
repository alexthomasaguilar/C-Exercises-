/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 5, 2015, 12:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {

    int x = 12; 
    int y = 0; 
    
    if (x == 4)
    {
        y = 4;
    }
    else if (x == 9)
    { 
        y = 5;
    }
    else 
    { 
        y = 6; 
    }
    cout << "The value of x is: " << x << "." << endl; 
    cout << "The value of y is: " << y << "." << endl; 
    return 0;
}

