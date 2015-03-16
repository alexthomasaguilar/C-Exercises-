/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 15, 2015, 9:03 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // prompt the user 
    
    cout << "Find out if a year is a leap year.\n" 
         << "Input a year: ";
    
    int userInput;
    cin >> userInput; 
    
    if ((userInput %4 == 0) && (userInput %100 != 0) || (userInput %400 == 0))
    {
        cout << "This is a leap year.";
    }
    else 
    {
        cout << "This is not a leap year.";
    }
    
    
    
    
    return 0;
}

