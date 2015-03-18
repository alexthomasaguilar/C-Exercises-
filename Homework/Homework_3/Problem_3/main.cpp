/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 17, 2015, 10:55 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    int maxCap = 50;
    int pepAtt = 67;
    int diff1 = maxCap - pepAtt;
    int diff2 = pepAtt - maxCap;
    
    cout << "Fire Law Regulation Program.\n";
    cout << " \n";
    cout << "Meeting room max capacity is " << maxCap << endl;
   
    
    if (pepAtt <= maxCap)
    {
        cout << "It is legal to hold the meeting.\n"
             << "There are " << diff1 << " spots available.";
    }
    else {
        cout << "The meeting cannot be held due to protocol\n"
             << diff2 << " people(s) must leave for the meeting to "
              << "be held.";
    }
    return 0;
}

