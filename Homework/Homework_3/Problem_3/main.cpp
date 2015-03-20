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

    
    cout << "Please enter the max capacity for the meeting room: ";
    int maxCap;
    cin >> maxCap;
    
    cout << "Please enter the number of people attending the meeting: ";
    int pepAtt;
    cin >> pepAtt;
    
    int diff1 = maxCap - pepAtt;
    int diff2 = pepAtt - maxCap;
    
    if (pepAtt <= maxCap)
       {
        cout << "It is legal to hold the meeting.\n"
             << "The meeting room can accept attendance to " << diff1 
                << " more individual(s).";
        }
    else if (pepAtt > maxCap) {
        cout << "The meeting cannot be held due to protocol.\n"
             << diff2 << " individual(s) must leave for the meeting to "
              << "be held.";
            }
    
    else {
        cout << "You did not enter a valid number.";
      }
    return 0;
}

