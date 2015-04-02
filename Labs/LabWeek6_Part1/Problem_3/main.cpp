/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 30, 2015, 10:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
 
    // THIS PROGRAM WORKS IF THE USER ONLY INPUTS ONE STRING WITHOUT ANY SPACES
    // NEED TO FIGURE HOW TO ALTER IT SO IT CAN READ ANY TYPE OF STRING 
    
    // prompt the user 
    cout << "This program will write anything you like into a file and \n"
         << "count the number of characters you enter.\n";
    cout << "Please enter 'y' to begin or 'n' to exit. ";
            string answer;
            cin >> answer;
            
    if (answer != "y" && answer != "n") {
     cout << "Invalid entry. Would you like to try again?\n"
          << "Enter a 'y' for yes or a 'n' for no. ";
     cin >> answer;
    }
            
   
    while (answer == "y") {
    cout << "\nPlease enter your string of characters: \n";
    
    string response;
    cin >> response; 
   
    ofstream outfile;
    outfile.open("test.txt");
    
    outfile << response; 
    
    outfile.close();
    
    // reading from the file we created 
    ifstream infile;
    
    infile.open("test.txt");
    
    if (!infile) {
        cout << "File not found.";
    }
    
    
    while (infile >> response) {
        cout << "Your string has " << response.size() 
             << " characters." << endl;
    }
   
    // selecting a new file to type in the number of characters
    // the file (#char.txt) only keeps count of one response and then 
    // replaces it with the next response 
    // need to fix this so it keeps track of all of the strings 
   
    ofstream outfile2;
    outfile2.open("#char.txt");
    outfile2 << "# of characters: " << response.size();
    outfile2.close();
  
    // prompting the user to enter a string again 
    cout << "\nDo you want to run this program again?\n";
    cout << "Enter a 'y' for yes or 'n' for no. ";
    cin >> answer;
    
    // testing the response to make sure the entry is correct 
    if (answer != "y" && answer != "n") {
     cout << "\nInvalid entry. Would you like to try again?\n"
          << "Enter a 'y' for yes or a 'n' for no. ";
     cin >> answer;
    
    }
    
    } // end of while loop 
   
    
    if (answer == "n") {
        cout << "Okay. Have a nice day.";
    }
    
    
    
    return 0;
}

