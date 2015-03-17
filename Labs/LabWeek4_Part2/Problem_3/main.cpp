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
    int userYear; 
    cin >> userYear; 
    
    if (userYear)
    {
        if (userYear %400 == 0)
        {
            cout << userYear << " is a leap year.\n";
        }
                
        else if (userYear %100 == 0)
        {
            cout << userYear << " is not a leap year\n";
        }
        else if (userYear %4 == 0)
        {
            cout << userYear << " is a leap year.\n";
        }
        else 
        {
            cout << userYear << " is not a leap year.\n";
        }
        
     }
    else 
    { 
        cout << "You entered an incorrect year.\n";
    }

 
    
    return 0;
}

