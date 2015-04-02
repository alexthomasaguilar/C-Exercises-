 /* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 30, 2015, 10:02 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char** argv) {

    // 2) Write a program that reads strings from a file, (like demonstrated in class), 
    // and counts how many characters there are in all of the strings. 
    //The program should indicate the total number of characters.
    
    // THIS PROGRAM WORKS IF THE USER ONLY INPUTS ONE STRING WITHOUT ANY SPACES
    // NEED TO FIGURE HOW TO ALTER IT SO IT CAN READ ANY TYPE OF STRING 
    
    // prompt the user 
    cout << "This program will write anything you like into a file and \n"
         << "count the number of characters you enter.\n";
  
    cout << "\nPlease enter your string of characters: \n";
    
    string response;
    cin >> response; 
   
    ofstream outfile;
    outfile.open("test.txt");
    
    outfile << "apples" << endl; 
    
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
   
    
  
    
    } // end of while loop 
    
         
 
    
    return 0;
}

