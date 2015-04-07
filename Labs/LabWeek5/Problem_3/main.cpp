/* 
 * File:   main.cpp
 * Author: alexaguilar
 *
 * Created on March 24, 2015, 9:26 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

bool palindrome (string word) {
    
    for (int i = 0; i < word.size(); i++) {
        
        if (word[i] != word[word.size() - 1-i]) {
            
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv) {

    // prompt the user what the program will do 
    cout << "This program will check to see if you \n"
         << "inputed a correct palindrome.\n";
    cout << "Enter your 'palindrome': ";
    string word;
    cin >> word;
    
    if (palindrome(word)) {
        cout << word << " is a palindrome.";
    }
    else {
        cout << word << " is not a palindrome.";
    }
    
    
    return 0;
}

