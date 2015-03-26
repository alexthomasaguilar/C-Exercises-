/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 24, 2015, 11:01 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    cout << "Please enter the number of stars for the first row: ";
    int userInput;
    cin >> userInput;
   
    
    for(int firstRow = userInput; firstRow > 0; firstRow--) {
        for(int column = 0; column < firstRow + 1; column++) {
            cout << "*";
        }
    }
        
    return 0;
}

