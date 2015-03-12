/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 9, 2015, 1:09 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {

   
    cout << "Please enter how much you owe: ";
    
    double owed;
    cin >> owed;
    
    cout << "Please enter what you paid: ";
    
    double paid;
    cin >> paid;
    
    // Calculate the change
    double change = paid - owed;
    
    // Convert change to pennies
    // Add an offset to avoid round off error
    int changeInt = (change + .0005) * 100;
    
    int dollars = changeInt / 100;
    // Get remaining change
    changeInt %= 100; // changeInt = changeInt % 100
    
    // Quarters
    int quarters = changeInt / 25;
    changeInt %= 25;
    
    // Dimes
    int dimes = changeInt / 10;
    changeInt %= 10;
    
    // nickels
    int nickels = changeInt / 5;
    changeInt %= 5;
    
    // Pennies
    int pennies = changeInt / 1;
    changeInt %= 1;
    
    // Output amounts
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
        
    
    
    
    return 0;
}

