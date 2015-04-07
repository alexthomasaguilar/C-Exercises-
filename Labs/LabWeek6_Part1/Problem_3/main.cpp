/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 30, 2015, 10:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
 
    // THIS PROGRAM WORKS IF THE USER ONLY INPUTS ONE STRING WITHOUT ANY SPACES
    // NEED TO FIGURE HOW TO ALTER IT SO IT CAN READ ANY TYPE OF STRING 
    
  
    ofstream outfile;
    outfile.open("test.txt");
    
    outfile << "One\n"; 
    outfile << "Two\n";
    outfile << "elephant\n"; 
    outfile << "toad\n";
    
    outfile.close();
    
    
    int sumString = 0;
    string text;
   
    // reading from the file we created 
    
    ifstream infile;
    
    infile.open("test.txt");
    
   
    if (!infile) 
    {
        cout << "File not found.";
    }
    
    else 
    {
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
    }
    // writing the string total into charactertotal txt 
    
   
    ofstream length;
    
    length.open("length.txt");
    
    length << "# of characters in all strings: " << sumString;
    
    length.close(); 
    
    
    return 0;
}

