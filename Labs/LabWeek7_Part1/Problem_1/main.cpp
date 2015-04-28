/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on April 9, 2015, 1:36 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

double power (double num, int exponent)
{ 
    int value = 1; 
    
    for (int i = 1; i <= exponent; i++)
    {
        value *= num;
    }
    return value;
    
}


int main(int argc, char** argv) 
{

    
    cout << power(4.0 , 2);
    
    return 0;
}


