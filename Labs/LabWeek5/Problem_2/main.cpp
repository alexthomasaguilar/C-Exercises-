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
    
    cout << "Pick a stick: "; 
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
        
       
        
        
        if (pickTotal > 4) {
             int cpuInput = 4 - userInput; 
            
             cout << "CPU chose: " << cpuInput << endl;
           
            pickTotal -= cpuInput;
            
            cout << "There are " << pickTotal << " toothpick(s) left.\n";
            
                 
        }
        /*else if (pickTotal <= 4 && pickTotal >= 2) {
           
            int cpuInput2 = pickTotal - 1;
            cout << "CPU chose: " << cpuInput2 << endl
                 << "There is " << pickTotal << " toothpick left.\n";
            
           
            
        }
        else if (pickTotal == 1) {
            cout << "There is " << 1 << "toothpick left.";
        } */
       
        
       
     
    }
    
    cout << "Invalid number.";
   
    }
        cout << "Have a good day.";
    
        return 0;
}

