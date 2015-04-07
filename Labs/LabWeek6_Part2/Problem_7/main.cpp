/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on April 6, 2015, 11:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int text (string length) {
    int numChar = length.size();
    return numChar;
}

int main(int argc, char** argv) {

    ofstream outfile;
    outfile.open("test.txt");
    
    outfile << "One\n"; 
    outfile << "Two\n";
    outfile << "elephant\n"; 
    outfile << "toad\n";
    
    outfile.close();
    
    // reading from the file we created 
    
    ifstream infile;
    string input;
    int sumString; 
    infile.open("test.txt");
    
   
    if (!infile) {
        cout << "File not found.";
    }
    
    infile  >> input; 
    cout << "1. " << text(input) << endl;
    
    sumString+= text(input);
    
    infile  >> input; 
    cout << "2. " << text(input) << endl;
    
    sumString+= text(input);
    
    infile  >> input; 
    cout << "3. " << text(input) << endl;
    
    sumString+= text(input);
    
    infile  >> input; 
    cout << "4. " << text(input) << endl;
    
    sumString+= text(input);
    
    
    cout << "Total string length is: " << sumString;
    infile.close();
    
    
    return 0;
}

