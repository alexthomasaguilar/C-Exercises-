/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on April 8, 2015, 12:42 AM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

void leapYear (int userInput)
{
    if (userInput)
    {
        if (userInput %400 == 0)
        {
            cout << userInput << " is a leap year.\n";
        }
                
        else if (userInput %100 == 0)
        {
            cout << userInput << " is not a leap year\n";
        }
        else if (userInput %4 == 0)
        {
            cout << userInput << " is a leap year.\n";
        }
        else 
        {
            cout << userInput << " is not a leap year.\n";
        }
        
     }
    else 
    { 
        cout << "You entered an incorrect year.\n";
    }
}
    


int main(int argc, char** argv) {

   cout << "Find out if a year is a leap year. (Y/N) ";
  
   string response;
   cin >> response; 
   
   while (response == "y" || response == "Y")
   {
       cout <<  "\nInput a year: ";
       int userYear; 
       cin >> userYear; 
       
       leapYear(userYear);
       
       cout << " " << endl;
       
       cout << "Do you want to run this program again? (Y/N) ";
       cin >> response;
       
   }
   
   if (response == "N" || response == "n")
   {
       cout << "\nOkay. Have a nice day.";
   }
           
    
    return 0;
}

