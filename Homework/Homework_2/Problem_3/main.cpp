/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 10, 2015, 9:49 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    string name1;
    string name2;
    string name3;
    
    double name1Quiz1;
    double name1Quiz2;
    double name1Quiz3;
    double name1Quiz4; 
    
    double name2Quiz1;
    double name2Quiz2;
    double name2Quiz3;
    double name2Quiz4; 
    
    double name3Quiz1;
    double name3Quiz2;
    double name3Quiz3;
    double name3Quiz4; 
   
    
    cout << "Please enter the three students names: ";
    cin >> name1;
    cin >> name2;
    cin >> name3;

    cout << "Now enter the four quiz grades for each student: " << endl; 
           
    cout << name1 << ": ";
    cin >> name1Quiz1;
    cin >> name1Quiz2;
    cin >> name1Quiz3;
    cin >> name1Quiz4; 
    
    cout << name2 << ": ";
    cin >> name2Quiz1;
    cin >> name2Quiz2;
    cin >> name2Quiz3;
    cin >> name2Quiz4; 
    
    cout << name3 << ": ";
    cin >> name3Quiz1;
    cin >> name3Quiz2;
    cin >> name3Quiz3;
    cin >> name3Quiz4; 
    
    cout << left; 
    
    
    
    cout << setw(10) << "name"; 
    cout << setw(10) << "Quiz 1";
    cout << setw(10) << "Quiz 2";
    cout << setw(10) << "Quiz 3";
    cout << setw(10) << "Quiz 4" << endl; 
    
    // dont know how to get the dashed lines to work
    cout << " " << endl; 
    
    // this works but doesnt line up with the quizes 
    cout << setw(10) << name1; 
    cout << setw(10) << name1Quiz1;
    cout << setw(10) << name1Quiz2;
    cout << setw(10) << name1Quiz3;
    cout << setw(10) << name1Quiz4 << endl; 
    
    cout << setw(10) << name2; 
    cout << setw(10) << name2Quiz1;
    cout << setw(10) << name2Quiz2;
    cout << setw(10) << name2Quiz3;
    cout << setw(10) << name2Quiz4 << endl; 
    
    cout << setw(10) << name3; 
    cout << setw(10) << name3Quiz1;
    cout << setw(10) << name3Quiz2;
    cout << setw(10) << name3Quiz3;
    cout << setw(10) << name3Quiz4 << endl; 
    
    cout << " " << endl; 
    
    cout << fixed << setprecision(2);
   
    double avgQuiz1 = (name1Quiz1 +name2Quiz1 +name3Quiz1)/3;
    double avgQuiz2 = (name1Quiz2 +name2Quiz2 +name3Quiz2)/3;
    double avgQuiz3 = (name1Quiz3 +name2Quiz3 +name3Quiz3)/3;
    double avgQuiz4 = (name1Quiz4 +name2Quiz4 +name3Quiz4)/3;
        
    cout << setw(10) << "Average"; 
    cout << setw(10) << avgQuiz1; 
    cout << setw(10) << avgQuiz2;
    cout << setw(10) << avgQuiz3; 
    cout << setw(10) << avgQuiz4; 
 
    // everything works okay
    // I just need to fix the style of output
    
    return 0;
}

