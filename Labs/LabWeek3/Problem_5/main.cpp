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

    double cash,change;
 
    
    cout << "Your meal will come out to $7.50.\n" 
         << "Please enter your cash: ";
    
    cin >> cash; 
    
    if (cash == 7.50)
    {
        cout << "Payment method confirmed.\n"
             << "Have a good day.";
    }
    else if (cash > 10)
    {
        cout << "Sorry but we do not have change.\n"
             << "There is an atm machine around the corner.";
    
    }
    
    else if (cash <= 10)
    {
        cout << "Thank you. Your change will be: "
             << float change = static_cast<float>cash - 7.50;
        
    }
    
    
    return 0;
}

