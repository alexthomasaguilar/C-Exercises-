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

void vectorFx (vector <int> & numbers) 
{
    int userInput; 
    int count = 0; 
    
     while (userInput != -1)
           {
                cin >> userInput;  
                numbers.push_back(userInput);
                ++count;
                 
           } 
    
    cout << "The vector is: ";
    
    for (int i = 0; i < count - 1; i++) 
    {
        cout << numbers[i] << " ";
    }
}

int main(int argc, char** argv) {
  // need to finish this problem
     cout << "Feel free to add numbers into the vector\n"
         << "Enter a -1 to stop.\n"; 

        vector <int> numbers; 
          cout << "Enter a number: ";
           
          vectorFx(numbers);
   
          
        
           
    return 0;
}

