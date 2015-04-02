/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 29, 2015, 8:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int max (int num1, int num2) {
    if (num1 >= num2) {
        return num1; 
    }
    else {
        return num2;
    }
}

int main(int argc, char** argv) {

    cout << "This program will determine the number that is the largest \n"
         << "amongst the two numbers you enter.\n";
    cout << "Will you like to begin? \n" 
         << "Enter 'y' for yes or 'n' for no. "; 
    string response;
    cin >> response; 
    
    while (response == "y") {
    
        cout << "\nPlease enter two numbers: ";
    
        int userInput1, userInput2; 
        cin >> userInput1; 
        cin >> userInput2;
        
        int maxValue = max(userInput1, userInput2);
        
        cout << "You entered: " << userInput1 << " and " 
             << userInput2 << endl
             <<  "The largest number is: " << maxValue; 
        
        cout << "\nWill you like to run the program again? \n" 
         << "Enter 'y' for yes or 'n' for no. "; 
    
             cin >> response; 
        
       
    
    } // end of while loop 
    if (response == "n") {
        cout << "Okay. Have a nice day.";  
    }
  
    cout << "Invalid entry.";
    return 0;
}

