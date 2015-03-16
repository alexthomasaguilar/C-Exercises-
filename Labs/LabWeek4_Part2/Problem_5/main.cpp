/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 16, 2015, 10:27 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    cout << "Guessing Game!\n"  
         << "You have 10 tries to guess my number\n" 
         << "that is within 1 an 100, unless it is game over." << endl; 
   
    int userGuess; 
    
    int guessNum = 45;
    
    for (int x = 0; x < 10; x++)
    { 
   
    cout << "( " << x << " )" << " guess: "; 
    cin >> userGuess;
    
    
    if (guessNum == userGuess)
    {
        cout << "Congratulations. You guessed correctly.\n";
    }
    else if (userGuess < guessNum)
    {
        cout << "Your guess is smaller than the initial number. "
             << "Guess again." << endl; 
    }
    else
    {
        cout << "Your guess is bigger than the initial number. "
             << "Guess again." << endl;
    }
   
    } 
   
            
    return 0;
}

