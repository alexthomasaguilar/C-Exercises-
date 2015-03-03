/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 12:19 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

     // problem 5
    
    double x,y,z; 
    
    cout << "Find the average of three test scores." << endl;
    
    cout << "Enter your test scores: ";
    cin >> x >> y >> z;  
    
    cout << "Your Average is: " << (x+y+z)/3;
    
    return 0;
}

