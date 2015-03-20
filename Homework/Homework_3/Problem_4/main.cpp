/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 18, 2015, 9:38 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    
    
    cout << "This program will output the sum total of \n"
         << "the 10 whole numbers you enter, and the\n"
         << "total for the numbers greater than and less \n"
         << "than zero.\n";
    
    
            
    int userInput, greater = 0, lessThan = 0, sumTotal;
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter a number: ";
        cin >> userInput;
        if (userInput >= 0)
        {
            greater += userInput;
        }
        else
        {
            lessThan += userInput;
        }
    }
    sumTotal = greater + lessThan;
   
    cout << "Sum total of numbers greater than 0: " << greater << endl
         << "Sum total of numbers less than 0: " << lessThan << endl 
         << "Sum total of all numbers: " << sumTotal << endl;
    
  

    
    
    return 0;
}