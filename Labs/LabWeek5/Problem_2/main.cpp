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
  
    while (answer == "y") {
    
    cout << "Choose the amount of sticks you will like to choose: "; 
    int userInput;
    cin >> userInput;
    
    if (userInput > 3 || userInput < 0) {
            cout << "Invalid number" << endl; 
            answer = "no";
        }
     
        
        if (pickTotal > 4 && userInput <= 3) {
        
            cout << "\nYou chose " << userInput << " toothpicks." << endl;
            pickTotal -= userInput;
            cout << "There are " << pickTotal << " toothpicks left." << endl;
            
            int cpuInput = 4 - userInput; 
            
             cout << "CPU chose: " << cpuInput << endl;
           
            pickTotal -= cpuInput;
            
            cout << "There are " << pickTotal << " toothpick left.\n";
            
                 
        }
        
        else if (pickTotal <=4 && userInput >= 2) {
            int cpuInput = pickTotal - 1;
            
            cout << "CPU chose " << cpuInput << " toothpicks." << endl; 
            pickTotal -= cpuInput;
            cout << "There are " << pickTotal << " toothpicks left." << endl;
                  
        }
        
        else if (pickTotal == 1) {
           int cpuInput = 1; 
          
            cout << "CPU chose " << cpuInput << " toothpicks." << endl; 
            pickTotal -= cpuInput;
            cout << "There are " << pickTotal << " toothpicks left." << endl;
            cout << "You won." << endl; 
            
            answer = "no";
            
        }
        
        else if (pickTotal <= 0) {
            
            cout << "You lost the game." << endl;
            answer = "no";
        }
        
        if (answer == "no") {
            cout << "Enter 'y' to play again or 'n' to exit."; 
            cin >> answer;
            pickTotal = 23; 
        }
    
     
   
    }
        cout << "Have a good day.";
    
        return 0;
}

