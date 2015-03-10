/* 
* File:   main.cpp 
* Name: Alex Aguilar 
* Student ID: 2507504
* Date: March 3, 2015
* HW: 1
* Problem: 1
* I certify this is my own work and code
 * Created on March 3, 2015, 3:22 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods; 
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods; 
    cout << " pea pods\n";
    cout << "and "; 
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    return 0;
}

