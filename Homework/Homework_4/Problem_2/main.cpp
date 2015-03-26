/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 25, 2015, 10:23 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    srand(time(0)); // program runs too fast therefore giving the same 
                     /// random number / I'm lost 
    int min = -100;
    int max = 100;
    int randNum = rand() % (max - min + 1) + min;
    
    cout << "This program will output the sum total of \n"
         << "the 10 whole numbers you enter, and the\n"
         << "total for the numbers greater than and less \n"
         << "than zero." << endl;
    
    
            
    int userInput, greater = 0, lessThan = 0, sumTotal, sumPos = 0,
            sumNeg = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". random number: " << randNum << endl;
        
        if (randNum >= 0)
        {
            greater += userInput;
            sumPos += 1;
            
        }
        else
        {
            lessThan += userInput;
            sumNeg += 1;
        }
    }
    sumTotal = greater + lessThan;
   
    cout << "\nSum total of numbers greater than 0: " << greater << endl
         << "\nAverage of positive numbers: " << greater/sumPos << endl
         << "\nSum total of numbers less than 0: " << lessThan << endl 
         << "\nAverage of negative numbers: " << lessThan/sumNeg << endl
         << "\nSum total of all numbers: " << sumTotal << endl
         << "\nAverage of all numbers: " << sumTotal / 10;
    
    return 0;
}

