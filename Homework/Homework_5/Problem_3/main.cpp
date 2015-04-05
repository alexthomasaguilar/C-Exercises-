/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 29, 2015, 7:29 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    // put together problem 7 and problem 8 into one program 
    // create some sort of menu 
   
    
    cout << "This program allows you play a game of rock-paper-scissors\n"
         << "with a cpu, or you can watch two cpus play against"
         <<  "one another.\n" << "Enter 'Player' to play or enter 'CPU' to "
         << "watch two cpus play rock-paper-scissors. ";
    string userInput;
    cin >> userInput;
    
    if (userInput == "Player") { // FIRST GAME 
        
        string user1;
        string user2;
        string response;
    
    cout << "2-Player Rock-Paper-Scissor Game." << endl; 
    cout << "Players must enter 'R' for Rock, 'P' for Paper, \n"
         << "or 'S' for scissor (lower case letters are acceptable)." << endl;
    cout << ""; 
    
    cout << "Enter 'yes' to play or 'no' to exit. ";
    cin >> response;
    
    while(response == "yes") {
    cout << "Player-One enter your choice: "; 
    cin >> user1;
    
    cout << ""; 
    
    cout << "Player-Two enter your choice: "; 
    cin >> user2;
    
    if((user1 == "P" || user1 == "p") && (user2 == "r" || user2 == "R")){
        cout << "Paper covers rock." << endl 
             << "Player-One wins.";
    }
    else if ((user1 == "R" || user1 == "r") && (user2 == "S" || user2 == "s")){
        cout << "Rock breaks scissors." << endl 
             << "Player-One wins.";
    }
    else if ((user1 == "S" || user1 == "s") && (user2 == "P" || user2 == "p")){
        cout << "Scissors cut paper." << endl 
             << "Player-One wins.";
    }
    else if((user2 == "P" || user2 == "p") && (user1 == "r" || user1 == "R")){
        cout << "Paper covers rock." << endl 
             << "Player-Two wins.";
    }
    else if ((user2 == "R" || user2 == "r") && (user1 == "S" || user1 == "s")){
        cout << "Rock breaks scissors." << endl 
             << "Player-Two wins.";
    }
    else if ((user2 == "S" || user2 == "s") && (user1 == "P" || user1 == "p")){
        cout << "Scissors cut paper." << endl 
             << "Player-Two wins.";
    }
   
    else if((user2 == "P" || user2 == "p") && (user1 == "p" || user1 == "P")){
        cout << "Nobody wins.";
    }
    else if ((user2 == "R" || user2 == "r") && (user1 == "r" || user1 == "R")){
        cout << "Nobody wins.";
    }
    else {
        cout << "Nobody wins.";
    }
    cout << "\nEnter 'yes' to play again or 'no' to quit. ";
    cin >> response;
    
    } // end of while loop
    
    cout << "Heave a nice day.";
    
    }
    
    else if (userInput == "CPU") { // CPU GAME 
         
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
    
    }
        
    
    return 0;
}

