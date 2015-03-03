/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 12:16 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // problem 3
    
      double userInput; 
     
      cout << "Please enter an amount of meters you will" << endl 
           << "like to convert to miles, feet, and inches." << endl; 
    
    cin >> userInput;
  
    cout << "Miles: " << userInput / 1609.344 << " miles." << endl; 
    cout << "Feet: " << userInput * 3.281 << " feet" << endl; 
    cout << "Inches: " << userInput * 39.372 << " inches";
    
    return 0;
}

