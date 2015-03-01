/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 26, 2015, 11:23 AM
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

