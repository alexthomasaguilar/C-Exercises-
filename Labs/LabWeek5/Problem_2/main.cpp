/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 24, 2015, 5:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    srand(time(0));
    //prompt the user 
    cout << "There is a total of 23 toothpicks.\n"
         << "You must choose whether to pick up either 1, 2, or 3\n"
         << "toothpicks. The person to select the last toothpick\n"
         << "loses.\n"
         << "Do you want to play against a CPU?\n"
         << "Enter 'y' for yes or 'n' for no. "; 
   
    
    int pickTotal = 23; 
    string answer;
    cin >> answer;
  
    if (answer == "y") {
    
    cout << "Please enter a number: "; 
    int userInput;
    cin >> userInput;
    
    // elements for cpu random generator 
    int min = 1;
    int max = 3; 
    int cpuNum = rand() % (max - min + 1) + min;
    
    while(userInput == 1 || userInput == 2 || userInput == 3) {
        if(userInput == 1){
            pickTotal -= userInput;
        }
        else if (userInput == 2) {
            pickTotal -= userInput;
        }
        else {
            pickTotal -= userInput;
        }
        
        // need to incorporate the random generator for computer 
        if (pickTotal >= 4) {
            pickTotal -= cpuNum;
            cout << "CPU chose: " << cpuNum << endl
                 << "There are " << pickTotal << " toothpicks left.\n";
                    
        }
        
        // need a new variable for this part of the problem
      
        if (pickTotal <= 4) { 
            int finalFour = 1;
            pickTotal + finalFour - pickTotal;
            cout << "CPU chose: " << cpuNum << endl
            << "There are " << pickTotal << " toothpicks left.\n";
           
        }
        if (pickTotal == 0) {
            cout << "You lost.";
            cout << "Do you want to play again?\n"
                << "Enter 'y' for yes or 'n' for no."; 
           cin >> answer;
          
        }
        
        if (pickTotal == 1) {
            cout << "You won. Congratulations.\n";
              
           cout << "Do you want to play again?\n"
                << "Enter 'y' for yes or 'n' for no."; 
           cin >> answer;
        }
        
        cout << "Please enter another number: ";
        cin >> userInput;
        
    }
    
    cout << "Invalid number.\n";
   
      // dont know how to go back to the loop if they enter an invalid number 
    }
    
    cout << "Have a good day.";

    return 0;
}

