/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on April 4, 2015, 2:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

// liter global constant 
const double LITERtoGAS = 0.264179;

// function for mpg 
double mpg (double miles, double liters){
    double conversion = miles / (liters * LITERtoGAS);
    return conversion; 
}

int main(int argc, char** argv) {

    // prompt the user 
    cout << "This program will determine the mpg for car 1\n"
         << "and car 2. It will also figure which car is\n" 
         << "the most fuel efficient.\n";
    cout << " ";
    cout << "\nWill you like to run this program?\n"
         << "Enter 'y' for yes or 'n' for no. ";
    
    string response; 
    cin >> response; 
    
    while (response == "y") {
        
        cout << " " << endl // car1 stats 
             << "Enter the number of miles traveled for car 1: "; 
        double milesTrav1;
        cin >> milesTrav1; 
        
        cout << " " << endl 
             << "Enter the number of liters consumed for car 1: "; 
        double litersConsumed1;
        cin >> litersConsumed1; 
        
        double car1 = mpg(milesTrav1, litersConsumed1);
        
        // end of car1
        
        cout << " " << endl 
             << "Enter the number of miles traveled for car 2: "; 
        double milesTrav2;
        cin >> milesTrav2; 
        
        cout << " " << endl 
             << "Enter the number of liters consumed for car 2: "; 
        double litersConsumed2;
        cin >> litersConsumed2; 
        
        double car2 = mpg(milesTrav2, litersConsumed2);
        
        // car 1 mpg
          cout <<  "" << endl 
             <<  "The number of miles per gallon for car 1: "
             << fixed << setprecision(2) << car1 // function "mpg"
             << endl; 
        
       // car 2 mpg 
           cout <<  "The number of miles per gallon for car 2: "
             << fixed << setprecision(2) << car2 // function "mpg"
             << endl << " " << endl;
        
        if (car1 == car2) {
            cout << "Both cars have the same fuel efficiency." 
                    << endl << " " << endl; 
        }
        else if (car1 > car2) {
            cout << "Car 1 has a better fuel efficiency." 
                    << endl << " " << endl;
        }
        else {
            cout << "Car 2 has a better fuel efficiency."
                    << endl << " " << endl; 
        }
        
        
        
        cout << " " << endl << "Do you want to run this program again?\n"
             << "Enter 'y' for yes or 'n' for no. ";
        cin >> response; 
        
        
    }
    
    cout << "Have a good day.";
    
    
    return 0;
}

