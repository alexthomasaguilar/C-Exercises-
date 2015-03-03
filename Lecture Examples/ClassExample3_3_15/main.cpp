/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 11:08 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // prompt the user for two numbers 
    cout << "Please enter two numbers: " << endl; 
    
    int num1, num2; 
    cin >> num1 >> num2; 
    
    // use static cast to convert to double
    double avg = static_cast<double>
    (num1 + num2) / 2.0;
    
    // left justify
    cout << left; 
    
    // use setprecision 
    cout << fixed << setprecision(2);
    cout << setw(10) << "Value 1";
    cout << setw(10) << "Value 2";
    
    cout << endl; 
    
    cout << setw(10) << num1;
    cout << setw(10) << num2;
    
    cout << endl; 
    
   // use setfill
    cout << setfill('@');
    cout << setw(10) << "Avg:";
    cout << setw(10) << avg; 
    
    
   
    return 0;
}

