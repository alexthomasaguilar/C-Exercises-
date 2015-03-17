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

    int guess, numb, initialGuess, i, result;
    
    //babylonian algorithm 
    cout << "This program approximates the square root \n"
         << "of a number using the Babylonian algorithm.\n"
         << "Input a number to figure out the square root: ";
    
    cin >> numb;
    
    guess = numb / 2; 
    initialGuess = numb; 
    
    while (initialGuess * .99 >= guess)
    {
        result = numb / guess; 
        initialGuess = guess; 
        guess = (guess + result)/2; 
        i++;
    }
    
    cout << "Square root of " << numb << " is " << guess << ".";
   
  
    
  
    
    return 0;
}

