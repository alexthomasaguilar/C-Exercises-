/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 12, 2015, 4:03 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // string member functions in lecture 6 of notes 

    cout << "Enter a letter grade from (A+ to B-) \n"
            << "to find out the corresponding number grade: ";

    string grade;
    cin >> grade;

    if (grade.substr(0, 1) == "A") 
    {
        if (grade.substr(0, 2) == "A+") {
        cout << "Your grade is 4.0";
        }
        else if (grade.substr(0, 2) == "A") {
        cout << "Your grade is 4.0";
        }
        else {
       
            cout << "Your grade is 3.7"; 
        }
    }
     
     
    if (grade.substr(0, 1) == "B") 
    {
        if (grade.substr(0, 2) == "B+") {
        cout << "Your grade is 3.3";
        }
        else if (grade.substr(0, 2) == "B") {
        cout << "Your grade is 3.0";
        }
        else {
       
            cout << "Your grade is 2.7"; 
        }
    }
   
    else { 
        cout << "Invalid Entry.";
    }
    
    
        
       
    return 0;
}

