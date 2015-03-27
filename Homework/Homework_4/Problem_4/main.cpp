/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 26, 2015, 9:04 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip> 
using namespace std;


int main(int argc, char** argv) {

    // need weight(lbs), height(inches), age(yrs), and sex (M or F)
    double weightInput, heightInput, ageInput, maleBmr, femaleBmr;
    double chocoCal = 230; 
    string sex;
    string userResponse;
    
    cout << "Do you want to figure out how many chocolate bars you have \n"
         << "to consume to maintain your body weight?" << endl;
    cout << "Enter 'y' for yes or a 'n' for no. "; 
    cin >> userResponse;
            
    
    while(userResponse == "y") {
    
    cout << "Let's Rock and Roll." << endl;
    
    cout << "" << endl;
    
    cout << "Please enter your weight in pounds: ";
    cin >> weightInput;
    
    cout << "" << endl;
    
    cout << "Please enter your height in inches: ";
    cin >> heightInput;
    
    cout << "" << endl;
    
    cout << "Please enter your age: ";
    cin >> ageInput;
    
    cout << "" << endl;
    
    cout << "Please enter your sex as either, 'M' or 'F': ";
    cin >> sex; 
    
    cout << "" << endl;
    
    if(sex == "M") {
        
        maleBmr = 66 + (6.3 * weightInput) + (12.9 * heightInput) 
                - (6.8 * ageInput);
       
        cout << "You need to eat " <<fixed << setprecision(2) 
            << maleBmr / chocoCal << " to maintain your weight."; 
    }
    else if (sex == "F") {
      
        femaleBmr = 655 + (4.3 * weightInput) + (4.7 * heightInput)
              - (4.7 * ageInput);
       
      cout << "You need to eat " <<fixed << setprecision(2) 
            << femaleBmr / chocoCal 
            << " chocolate bars to maintain your weight." << endl;
    }
    
    else {
       
        cout << "Invalid sex.";
    }
    
    cout << "\nDo you want to run this program again?" << endl;
    
    cout << "Enter 'y' for yes or a 'n' for no. "; 
    cin >> userResponse;
    
    } // end of while loopn
    
    cout << "Have a nice day.";
    return 0;
}

