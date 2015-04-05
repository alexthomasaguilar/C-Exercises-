/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on April 4, 2015, 8:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
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
    cout << "This program will determine the miles per gallon \n"
         << "for the amount of liters of gas your car consumed in the\n" 
         << "number of miles you traveled.";
    cout << " ";
    cout << "\nWill you like to run this program?\n"
         << "Enter 'y' for yes or 'n' for no. ";
    
    string response; 
    cin >> response; 
    
    while (response == "y") {
        
        ofstream outfile; 
        outfile.open("data.dat");
        outfile << 100;  // miles 
          
        outfile.close(); // comfused with the data.dat file 
                          // spend some time researching and couldn't figure out 
                         // how it works 
        
       /* cout <<  "" << endl 
             <<  "The number of miles per gallon the car delivered: "
             << fixed << setprecision(2) << mpg(milesTrav, litersConsumed) // function "mpg"
             << endl; 
        
       cout << " " << endl << "Do you want to run this program again?\n"
             << "Enter 'y' for yes or 'n' for no. ";
        cin >> response; */
        
        
    }
    
    cout << "Have a good day.";
    
    
    return 0;
}

