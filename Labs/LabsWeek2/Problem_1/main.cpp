/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 12:13 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

     cout << "Hello, my name is Alex!" << endl; 
    
    string text = "What is your name? "; 
    
    cout << text;
    
    string userInput; 
    
    cin >> userInput;
    
    cout << "Hello, " << userInput << ". I am glad to meet you.";
    return 0;
}

