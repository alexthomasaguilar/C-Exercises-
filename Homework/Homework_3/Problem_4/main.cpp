/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 18, 2015, 9:38 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    cout << "This program will output three sum totals \n"
         << "for the 10 whole numbers you enter.\n";
    
    int input1, input2, input3, input4, input5, 
            input6, input7, input8, input9, input10;
    
    cout << "1. Please enter a whole number: ";
            cin >> input1;
    
    cout << "2. Please enter a whole number: ";
            cin >> input2;
    
    cout << "3. Please enter a whole number: ";
            cin >> input3;
    
    cout << "4. Please enter a whole number: ";
            cin >> input4;
    
    cout << "5. Please enter a whole number: ";
            cin >> input5;
    
     cout << "6. Please enter a whole number: ";
            cin >> input6;
    
    cout << "7. Please enter a whole number: ";
            cin >> input7;
    
    cout << "8. Please enter a whole number: ";
            cin >> input8;
    
    cout << "9. Please enter a whole number: ";
            cin >> input9;
    
    cout << "10. Please enter a whole number: ";
            cin >> input10;
    
    cout << "Thanks. \n"
         << "Theses are the numbers you entered: \n"
         << input1 << " " << input2 << " " << input3 << " "  
         << input4 << " " << input5 << " " << input6 
         << " " << input7 << " " << input8 << " " 
         << input9 << " " << input10;
    
    int sumGre, sumLes, sumTot;
    
    sumTot = input1 + input2 + input3 + input4 + input5 
           + input6 + input7 + input8 + input9 + input10;
    
    
   
    return 0;
}

