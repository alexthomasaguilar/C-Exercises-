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
        
        int cpuInput = 4 - userInput; 
        
        if (pickTotal > 4) {
            pickTotal -= cpuInput;
            cout << "CPU chose: " << cpuInput << endl
                 << "There are " << pickTotal << " toothpicks left.\n";
                    
        }
        
        // need to solve part b of 
      
      /*  if (pickTotal <= 4) { 
            
        
            
             pickTotal = pickTotal - userInput 
            cout << "CPU chose: " <<  << endl
            << "There are " << pickTotal << " toothpicks left.\n"; 
        } */
    
        if (pickTotal == 0) {
            cout << "You lost.";
            cout << "Do you want to play again?\n"
                << "Enter 'y' for yes or 'n' for no."; 
           cin >> answer;
          
        }
        
        if (pickTotal == 1) {
            cout << "There are " << pickTotal << " toothpicks left.\n" 
                 << "CPU chose: " << 1 << endl;
            
            cout << "You won. Congratulations.\n";
              
           cout << "Do you want to play again?\n"
                << "Enter 'y' for yes or 'n' for no."; 
           cin >> answer;
        }
        
        cout << "Please enter another number: ";
        cin >> userInput;
        
    }
    
     cout << "Invalid number.\n";
     cout << "Do you want to play again?\n"
                << "Enter 'y' for yes or 'n' for no."; 
     cin >> answer;
   
      // dont know how to go back to the loop if they enter an invalid number 
    }
    
    cout << "Have a good day.";

    return 0;
}

