/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 10, 2015, 2:12 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    cout << "Enter your response into each section " << endl
           << "(max of 10 characters each):" << endl;
    
    string name, name2, food, number, adjective, color, animal; 
    
    cout << "a. A name: ";
    cin >> name; 
    
    cout << "b. Another name: ";
    cin >> name2; 
    
    cout << "c. A food: ";
    cin >> food; 
    
    cout << "d. A number between 100 and 120: "; 
    cin >> number; 
    
    cout << "e. And Adjective: ";
    cin >> adjective; 
    
    cout << "f. A color: "; 
    cin >> color; 
    
    cout << "g. An animal: "; 
    cin >> animal; 
    
    cout << " " << endl;
    
    cout << "Dear " << name << "," << endl; 
    
    cout << " " << endl; 
    
    cout << "I am sorry that I am unable to turn in my "
         << "homework at this time. "
         << " First, I ate a rotten " << food << ", which made me turn "
         << color << " and extremely ill. I came down with a fever of " 
         << number << ". Next, my " << adjective << " pet " << animal 
         << " must have smelled the remains of the " << food << " on my" 
         << " homework because he ate it. I am "
         << "currently rewriting my homework"
         << " and hope you will accept it late." << endl; 
    
    cout << " " << endl; 
    
    cout << "Sincerely," << endl; 
    cout << name2;
    return 0;
}

