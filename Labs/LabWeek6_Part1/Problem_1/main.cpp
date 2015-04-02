/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 29, 2015, 8:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int max (int num1, int num2) {
    if (num1 >= num2) {
        return num1; 
    }
    else {
        return num2;
    }
}

int main(int argc, char** argv) {

   
        int num1 = 5, num2 = 1, num3 = 5, num4 = 10, num5 = 199,
        num6 = 2, num7 = 90, num8 = 10, num9 = 1, num10 = 89;
        
        int maxValue1 = max(num1, num2);
        
        cout << num1 << " and " << num2 << endl
         <<  "The largest number is: " << maxValue1 << endl; 
        cout << " " << endl; 
     
        int maxValue2 = max(num3, num4);
        
        cout << num3 << " and " << num4 << endl
         <<  "The largest number is: " << maxValue2 << endl; 
        cout << " " << endl; 
        
        int maxValue3 = max(num5, num6);
        
        cout << num5 << " and " << num6 << endl
         <<  "The largest number is: " << maxValue3 << endl; 
        cout << " " << endl; 
       
        
        int maxValue4 = max(num7, num8);
        
        cout << num7 << " and " << num8 << endl
         <<  "The largest number is: " << maxValue4 << endl; 
        cout << " " << endl; 
        
        int maxValue5 = max(num9, num10);
        
        cout << num9 << " and " << num10 << endl
         <<  "The largest number is: " << maxValue5 << endl; 
        cout << " " << endl; 
       
        
 
    return 0;
}

