/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 12, 2015, 11:43 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    /* a) int x = 0; 
    while (x < 10)
    {
        cout << x << endl;
        x++; // there was no incrementor 
    }
    return 0;
    */ 
    
   /* b) */
      
    int testResult = 1; 
    
    while(testResult >= 1 && testResult <= 100)
    {
        // prompt the user 
       cout << "Please enter a test result from 1 to 100: ";


       cin >> testResult; 

       if (testResult <= 100 && testResult >= 90)
       {
           cout << "You got an A!\n"; 
       }

       else if (testResult < 90 && testResult >= 80)
       {
           cout << "You got a B!\n";
       }

       else if (testResult < 80 && testResult >= 70)
       {
           cout << "You got a C!\n";
       }

       else if (testResult < 70 && testResult >= 60)
       {
           cout << "You got a D!\n";
       }
       else if (testResult <= 50 && testResult >=1) 
       {
          cout << "You got a F. Shaking my head boi.\n";
       }
       else
       { 
           cout << "Invalid number.";
       }
    }
}
    
    
    
   
    
    
 
    


