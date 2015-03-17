/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 16, 2015, 1:12 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {

    string tele;
    
    cout << "Please enter a telephone number with "
         << "only one dash '-' in between: "; 
    cin >> tele;
    
    cout << tele;
    
    return 0;
}

