/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 1, 2015, 12:04 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // problem 5 
    
    int x,y; 
    
    cout << "Enter two numbers to be added" << endl;
    cout << "and multiplied to one another:";
    cin >> x >> y; 
    
    cout << "Sum: " << x+y << endl;
    cout << "Product: " << x*y;
    
    return 0;
}

