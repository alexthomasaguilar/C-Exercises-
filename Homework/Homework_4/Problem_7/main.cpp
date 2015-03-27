/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 26, 2015, 11:37 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

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
    return 0;
}

