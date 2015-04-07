/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 30, 2015, 1:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int text (string length) {
    int numChar = length.size();
    return numChar;
}

int main(int argc, char** argv) {

    
    cout << "The string is " << text("honeybadger") << " characters.";
    return 0;
}

