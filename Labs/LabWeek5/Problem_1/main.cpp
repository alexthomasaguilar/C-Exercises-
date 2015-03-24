/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 24, 2015, 11:23 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
 
    cout << "Would you like to find out your total amount due,\n"
         << "and minimum payment for your account?\n"
         << "Enter a 'y' for yes or a 'n' for no.\n";
    
    string response; 
    cin >> response; 
   
    double totalAmount1, minPay, totalAmount2;
    
    
   
    while(response == "y")
   { 
        cout << "Enter your account balance: $"; 
        double accountBal;
        cin >> accountBal;
        
        cout << "Your account balance is: " << "$" << accountBal << endl;
      
        // figuring out how to add the interest 
        if (accountBal >= 0 && accountBal <= 1000)  {
          double rate1 = (accountBal * .015);
          totalAmount1 = accountBal + rate1;
          cout << fixed << setprecision(2) <<"Total amount due: "  
                << "$" << totalAmount1 << endl;
              
           if (accountBal < 10) {
                  cout << "Minimum payment is: " << fixed << setprecision(2) 
                         <<  totalAmount1;
           }
          
           if (accountBal >= 10 && accountBal <= 100) {
               cout << "Minimum payment is: " << "$" << 10;
              }
           if (accountBal > 100 && accountBal <= 1000) {
              cout << "Minimum payment is: " << "$" << 
                      fixed << setprecision(2) << totalAmount1 * .10;
          }
      }
        else if (accountBal > 1000) { 
           double rate2 = 1000 * .015; 
           double rate3 = (accountBal - 1000) * .01;
           totalAmount2 = rate2 + rate3 + accountBal;
           cout << fixed << setprecision(2) << "Total amount due: "  
                << "$" << totalAmount2 << endl;  
           
           if (accountBal > 1000) {
               cout << "Minimum payment is: " <<fixed << setprecision(2) 
                       << totalAmount2 * .10; 
           }
        }
        
        else {
            cout << "Invalid account balance.";
        }
        
        cout << endl
             << "\nWould you like to run this program again?\n"
         << "Enter a 'y' for yes or a 'n' for no.\n";
        cin >> response;
    } 
    
    
    cout << "Okay. Have a nice day.";
   
    
 
        
    return 0;
}

