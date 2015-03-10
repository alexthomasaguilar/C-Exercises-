/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 3, 2015, 11:36 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    cout << "Figure out a baseball hitter's slugging percentage" << endl; 
    
    int singles;
    int doubles;
    int triples;
    int home_runs; 
    int at_bats;
    
    cout << "Enter number of singles: ";
    cin >> singles;
    
    cout << "Enter number of doubles: ";
    cin >> doubles;
    
    cout << "Enter number of triples: ";
    cin >> triples;
    
    cout << "Enter number of home runs: ";
    cin >> home_runs;
    
    cout << "Enter number of at bats: ";
    cin >> at_bats;
    
   float slugging_percentage = static_cast<float>(singles + 2*doubles 
        + 3*triples +4*home_runs)/at_bats;
   
   cout << "The hitter's slugging percentage is: ";
   cout << slugging_percentage;
    
    
    return 0;
}

