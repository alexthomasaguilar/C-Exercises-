/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 26, 2015, 11:46 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;



int main(int argc, char** argv) {

                          
    string user2;
    string response;
   
    
    
    cout << "2-CPU Rock-Paper-Scissor Game." << endl; 
    cout << "CPUs generate random numbers: \n"
         << "'1' for Rock, '2' for Paper, \n"
         << "or '3' for scissor. " << endl;
    cout << ""; 
    
    cout << "Enter 'yes' to watch or 'no' to exit. ";
    cin >> response;
    
    while(response == "yes") {  
   
    srand(time(0));
    int max = 3 ;
    int min = 1;
    int cpu1 = rand() % (max - min + 1) + min;
    int cpu2 = rand() % (max - min + 1) + min; 
    
    cout << "CPU-1 choice: " << cpu1 << endl; 
    
    
    cout << ""; 
    
    cout << "CPU-2 choice: " << cpu2 << endl;
    
    
    if(cpu1 == 1 && cpu2 == 2){
        cout << "Paper covers rock." << endl 
             << "CPU-1 wins.";
    }
    else if (cpu1 == 2 && cpu2 == 3){
        cout << "Rock breaks scissors." << endl 
             << "CPU-1 wins.";
    }
    else if (cpu1 == 3  && cpu2 == 1){
        cout << "Scissors cut paper." << endl 
             << "CPU-1 wins.";
    }
    else if(cpu2 == 1 && cpu1 == 2){
        cout << "Paper covers rock." << endl 
             << "CPU-2 wins.";
    }
    else if (cpu2 == 2 && cpu1 == 3){
        cout << "Rock breaks scissors." << endl 
             << "CPU-2 wins.";
    }
    else if (cpu2 == 3 && cpu1 == 1){
        cout << "Scissors cut paper." << endl 
             << "CPU-2 wins.";
    }
   
    else if(cpu1 == 1 && cpu2 == 1){
        cout << "Nobody wins.";
    }
    else if (cpu1 == 2 && cpu2 == 2 ){
        cout << "Nobody wins.";
    }
    else {
        cout << "Nobody wins.";
    }
    cout << "\nEnter 'yes' to play again or 'no' to quit. ";
    cin >> response;
    
    } // end of while loop
    
    cout << "Okay. Heave a nice day.";
    
    return 0;
}

