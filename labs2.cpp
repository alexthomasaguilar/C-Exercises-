/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 24, 2015, 11:49 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Hello, my name is Alex!" << endl; 
    
    string text = "What is your name?"; 
    
    cout << text;
    
    string userInput; 
    
    cin >> userInput;
    
    cout << "Hello, " << userInput << ". I am glad to meet you.";
    
            return 0;
}

