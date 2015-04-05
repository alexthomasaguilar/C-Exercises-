/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 26, 2015, 9:51 PM
 */

#include <cstdlib> //   NOT FINISHED 
#include <iostream>
using namespace std;


int main(int argc, char** argv){

    int score, pointsPosbl, numExer; 
    int sumScore = 0, sumPoints = 0;
    double average; 
    
    cout << "Calculate the total grade for classroom exercises.";
    
    
    
    
    for(int i = 0; i < numExer; i++) {
        
    cout << "How many exercises to input? ";
    cin >> numExer;
    
    cout << "How many exercises to input? ";
    cin >> numExer;
    
    cout << "Score received for exercise " << i + 1 << ": ";
    cin >> score;
    
    cout << "Total points possible for exercise " << i + 1 << ": ";
    cin >> pointsPosbl; 
    
    sumScore += score;
    sumPoints += pointsPosbl;
    
    average = sumScore / sumPoints;
    
    cout << "Your total is " << sumScore << "out of " << sumPoints
            << ", or " << average * 100 << "%.";
    
    
       }
            
  
return 0;
    
    
}

