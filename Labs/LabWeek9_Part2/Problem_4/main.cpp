/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 23, 2015, 12:24 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char** argv) {
  // need to finish this problem
     cout << "Feel free to add numbers into the vector\n"
         << "Enter a -1 to stop.\n"; 

        vector <int> numbers; 
          int userInput; 
          cout << "Enter a number: ";
           cin >> userInput; 
   
         while (userInput != -1)
           {
                 numbers.push_back(userInput);
                 cout << "Enter another number: ";
                 cin >> userInput;
           } 
           
    return 0;
}

