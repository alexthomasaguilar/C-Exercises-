/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 12, 2015, 3:27 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {

    // prompt the user 
    cout << "Please enter your letter grade: ";
    
    string testResult; 
    cin >> testResult; 
    
  
    if (testResult == "A+")
    {
        
        
        cout << "Your percentage is greater than 100%."
                << " Did you cheat?"; 
    }
    
    else if (testResult == "A")
    {
        cout << "Your percentage is from: 93 to 100%";
    }
   
    else if (testResult == "A-") 
    {
        cout << "Your percentage is from: 90 to 92.9%";
    }
    
      else if (testResult == "B+")
    {
        cout << "Your percentage is from: 87 to 89.9%";
    }
   
    else if (testResult == "B") 
    {
        cout << "Your percentage is from: 83 to 86.9%";
       
    }
      else if (testResult == "B-")
    {
        cout << "Your percentage is from: 80-82.9 to 100%";
    }
      else 
      {
          cout << "You entered an invalid letter grade.";
      }
    
    
    return 0;
}

