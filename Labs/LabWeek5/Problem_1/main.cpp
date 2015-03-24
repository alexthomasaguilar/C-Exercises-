/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 24, 2015, 11:23 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
 
    cout << "Would you like to find out your total amount due,\n"
         << "and minimum payment for your account?\n"
         << "Enter a 'y' for yes and an 'n' for no.\n";
    
    string response; 
    cin >> response; 
   
    double totalAmount, minPay;
  
   
    while(response == "y")
   { 
        cout << "Enter your account balance: $"; 
        double accountBal;
        cin >> accountBal; 
        
        if (accountBal >= 0 && accountBal <= 1000)  
      {
          double rate1 = (accountBal * .015);
          totalAmount = accountBal + rate1;
         
      }
        cout << totalAmount << endl;
        cout << "Would you like to run this program again?"
         << "Enter a 'y' for yes and an 'n' for no.\n";
        cin >> response;
    } 
    
    
    cout << "Would you like to run this program again?\n"
         << "Enter a 'y' for yes and an 'n' for no.\n";
    cin >> response;
    
 
        
    return 0;
}

