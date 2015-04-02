/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 30, 2015, 12:49 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int square (int num) {
   
    int squared = num * num;
    
    return squared; 
}


int main(int argc, char** argv) {

    int x = 4;
    cout << x << "^2 is: " << square(x);
    
    return 0;
}

