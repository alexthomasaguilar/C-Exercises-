/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 28, 2015, 11:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {

    cout << "Enter a file name: ";
    string fileName;
    cin >> fileName;
    
    
    ifstream infile;
    infile.open(fileName.c_str());
    
    while (!infile) 
    {
        cout << "Error! Enter another file: ";
        cin >> fileName;
        
        infile.open(fileName.c_str());
    }
    
    
    
    
    
    return 0;
}

