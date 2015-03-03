/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 11:38 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Enter two numbers that are less than 1000: " << endl; 
    
    int x, y;
    cin >> x >> y; 
    
    cout << "X = " << x << " Y = " << y << endl;
   
    cout << setw(80) << setfill('-');
            
    cout << "X = " << y << " Y = " << x << endl; 
            
    return 0;
}

