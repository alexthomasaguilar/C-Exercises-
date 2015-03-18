/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 17, 2015, 10:01 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    int apple, orange, pear;
    cout << "Fruit Organizer!\n"
         << "This program will help you determine the amount \n"
         << "of fruit to leave behind, so you can have a \n"
         << "balanced amount of fruit on your trip.\n"; 
    
    cout << " \n";
    
    cout << "Please enter the total amount for each fruit.\n";
    
    cout << "Apples: ";
    cin >> apple;
    
    cout << "Oranges: ";
    cin >> orange;
    
    cout << "Pears: ";
    cin >> pear;
    
    int sumTot, appDif, oraDif, peaDif;
    
    sumTot = apple + orange + pear;
    
    appDif = sumTot - apple;
    
    oraDif = sumTot - orange; 
    
    peaDif = sumTot - pear;
    
   
    if (appDif > oraDif && appDif > peaDif)
    {
        cout << "The number of apples you should leave: " << apple - apple
             << endl;
        cout << "The number of oranges you should leave: " << orange - apple
             << endl;
        cout << "The number of pears you should leave: " << pear - apple
             << endl;
    }
    else if (oraDif > appDif && oraDif > peaDif)
    {
        cout << "The number of apples you should leave: " << apple - orange
             << endl;
        cout << "The number of oranges you should leave: " << orange - orange
             << endl;
        cout << "The number of pears you should leave: " << pear - orange
             << endl;
    }
    else if (peaDif > appDif && peaDif > oraDif)
    {
        cout << "The number of apples you should leave: " << apple - pear
             << endl;
        cout << "The number of oranges you should leave: " << orange - pear
             << endl;
        cout << "The number of pears you should leave: " << pear - pear
             << endl;
    }
    else {
        cout << "You didn't buy any fruit.";
    }
    
    
  
    
  
    
   
    return 0;
}

