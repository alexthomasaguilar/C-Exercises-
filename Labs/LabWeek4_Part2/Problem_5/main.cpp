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
         << "which is within 1 an 100; unless, it is game over." << endl; 
    
    srand(time(0)); //random number
    int randNum = rand () % 100; //get random number
   
    cout << "Do you want to play? yes/no\n";
    string answer; 
    cin >> answer;
    int i = 0;
    
    while (answer == "yes" && i < 10)
    {
        cout << "Guess a number: ";
        int num; 
        cin >> num; 
        i++;
        
        if (num > randNum)
        {
            cout << "Too big of a guess. Guess again.\n";
        }
        if (num < randNum)
        {
            cout << "Too small of a guess. Guess again.\n";
        }
        if (num == randNum) 
        { 
            
            cout << "You guessed correctly. Congratulations.\n";
            
        }
        
    } 
  cout << "You have ran out of guesses. Game Over.\n";   
  
  

    return 0;
}

 