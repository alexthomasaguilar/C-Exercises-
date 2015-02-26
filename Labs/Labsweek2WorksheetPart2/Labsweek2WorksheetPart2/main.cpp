/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 26, 2015, 11:23 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // problem 2 
    int a = 155; 
    int b = 168; 
    int x = a; 
    
    cout << "a: " << a << " " << "b: " << b << endl; 
    
    x = a; 
    a = b; 
    b = x; 
    
    cout << "a: " << a << " " << "b: " << b << endl; 
    return 0;
}

