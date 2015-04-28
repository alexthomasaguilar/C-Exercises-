/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 23, 2015, 12:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

void returnV (vector <int> & numbers)
{
    int size = numbers.size(); 
    
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

}

int main(int argc, char** argv) {

    
   vector <int> numbers; 
   numbers.push_back(1);
   numbers.push_back(2);
   numbers.push_back(1000);
      
   returnV(numbers); 
       
   
    return 0;
}

