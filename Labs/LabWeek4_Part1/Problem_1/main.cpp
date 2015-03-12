/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 10, 2015, 2:08 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
   
    // prompt the user 
    cout << "Please enter a test result from 1 to 100: ";
    
    int testResult; 
    cin >> testResult; 
    
    if (testResult <= 100 && testResult >= 90)
    {
        cout << "You got an A!"; 
    }
    
    else if (testResult < 90 && testResult >= 80)
    {
        cout << "You got a B!";
    }
   
    else if (testResult < 80 && testResult >= 70)
    {
        cout << "You got a C!";
    }
    
    else if (testResult < 70 && testResult >= 60)
    {
        cout << "You got a D!";
    }
    else 
    {
       cout << "You got a F. Shaking my head boi.";
    }
    
    return 0;
}

