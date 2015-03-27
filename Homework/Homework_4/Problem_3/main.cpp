/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 25, 2015, 10:43 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    int year, cell; 
    string xv = "";
    string userInput;
    
    cout << "Do you want to convert a year into a roman numeral?\n"
         << "Enter 'y' for yes and 'n' for no. ";
    
    cin >> userInput;
    
     cout << "Enter a year between 1000 and 3000, so it can be converted \n"
         << "into a roman numeral. "; 
    
    cin >> year; 
    
   
    while (userInput == "y") {
    
    if (year < 1000 || year > 3000) {
        cout << "\n Invalid number.";
    }
    else {
       
        // 1st split of the year (thousands place )
        if (year >= 1000) {
            cell = year / 1000;
                
            for(int i = 0; i < cell; i++) {
                xv += 'M';
            }
            
        }                           
        // 2nd split 
        if (year >= 100) {
            int change1 = year % 1000;  // had to do this change to be able 
            cell = change1 / 100;       // analyze the next part of the 4 digit year
                    
                    if (cell == 9) {
                        xv += "CM";
                    }
                    else if (cell >= 5) {
                        xv += 'D';
                        
                        for(int i = 0; i < cell - 5; i++) {
                            xv += 'C';
                        }
                    }
                    else if (cell == 4) {
                        xv += "CD";
                    }
                    else if (cell >= 1) {
                        for (int i = 0; i < cell; i++){
                            cell += 'C';
                        }
                    }
            
        }
        // 3rd split 
        if (year >= 10) {
            
            int change2 = year % 100;
            cell = change2 / 10;
            
            if (cell == 9) {
                        xv += "XC";
                    }
                    else if (cell >= 5) {
                        xv += 'L';
                        
                        for(int i = 0; i < cell - 5; i++) {
                            xv += 'X';
                        }
                    }
                    else if (cell == 4) {
                        xv += "XL";
                    }
                    else if (cell >= 1) {
                        for (int i = 0; i < cell; i++){
                            xv += 'X';
                        }
                    }
          
            
        }
        // last split 
         if (year >= 1) {
             int change3 = year % 10;
             cell = change3 / 10;
            
            if (cell == 9) {
                        xv += "IX";
                    }
                    else if (cell >= 5) {
                        xv += 'V';
                        
                        for(int i = 0; i < cell - 5; i++) {
                            xv += 'I';
                        }
                    }
                    else if (cell == 4) {
                        xv += "IV";
                    }
                    else if (cell >= 1) {
                        for (int i = 0; i < cell; i++){
                            xv += 'I';
                        }
                    }
          
        }
        
        
        
        cout << "Roman numeral conversion for your year: " << xv << endl;
        cout << "Want to convert another year?\n"
              << "Enter a 'y' for yes or a 'n' for no. ";
        
             cin >> userInput; 
    
    cout << "Enter a year between 1000 and 3000, so it can be converted \n"
         << "into a roman numeral. "; 
    
    cin >> year; 
    
        
          }
    
    } // end of while 
    cout << "Have a nice day.";
    return 0;
}

