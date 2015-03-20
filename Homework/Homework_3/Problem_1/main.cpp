/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 17, 2015, 9:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    string tele;
    
    cout << "Please enter a telephone number with "
         << "only one dash ( - ) : \n"; 
    cin >> tele;
   
    
    int location = tele.find('-');
    
    cout << "Your Phone Number is: " 
         <<   tele.substr(0,location) << tele.substr(location + 1);
    
    return 0;
}

