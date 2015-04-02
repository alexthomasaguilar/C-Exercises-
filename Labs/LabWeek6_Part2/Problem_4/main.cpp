/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 30, 2015, 12:43 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int cube (int num) {
    int cubed = num * num * num;
    return cubed;
}

int main(int argc, char** argv) {

    int x = 5;
    cout << x << "^3 = " << cube(x) << endl;
    
    return 0;
}

