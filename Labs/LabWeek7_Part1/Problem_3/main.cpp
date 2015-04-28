/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on April 9, 2015, 1:33 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


void factorial (int num)
{
    int value = 1;     // define a variable to manipulate the number to become a factorial
    int factor = num;  // set num equal to new variable to get it mixed up 
    
    if (num > 0)
    {
       for (int i = 1; i <= num; i++) // loop to multiply the number to become the factorial 
        {
            value *= factor; 
            factor--;  

        }
       cout << value;
    }
    else if (num == 0) // checking the condition 
    {
        value = 0;
        
        cout << value; 
    }
    else
    {
        cout << "Invalid entry.";
    }
    
   
}

int main (int argc, char** argv) 
{

    cout << "Enter a number to find the factorial: ";
    int num; 
    cin >> num; 
    factorial(num);
    
    return 0;
}

