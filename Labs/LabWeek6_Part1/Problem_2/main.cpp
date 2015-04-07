/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 2, 2015, 12:27 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    // 2) Write a program that reads strings from a file, (like demonstrated in class), 
    // and counts how many characters there are in all of the strings. 
    //The program should indicate the total number of characters.
    
  
 
    ofstream outfile;
    outfile.open("test.txt");
    
    outfile << "One\n"; 
    outfile << "Two\n";
    outfile << "elephant\n"; 
    outfile << "toad\n";
    
    outfile.close();
    
    // reading from the file we created 
    
    ifstream infile;
    string text;
    int sumString = 0; 
    infile.open("test.txt");
    
   
    if (!infile) {
        cout << "File not found.";
    }
    
    infile  >> text; 
    cout << "1. " << text.size() << endl;
    
    sumString+= text.size();
    
    infile >> text; 
    cout << "2. "  << text.size() << endl;
    
    sumString+= text.size();
    
    infile >> text; 
    cout << "3. " << text.size() << endl;
    
    sumString+= text.size();
    
    infile >> text; 
    cout << "4. " << text.size() << endl;
    
    sumString+= text.size();
    
    cout << "Total string length is: " << sumString;
    infile.close();
    
    
   
    return 0;
}

