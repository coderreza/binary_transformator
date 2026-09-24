// binary_tranformator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>


int main()
{
    int number;
    
    cout << "Welcome to the zar binary transformation app, inter the number: ";
    cin >> number;
    cout<< "\n";
    cout << "the binary is ";
    string bin;
    int wait;
    while (true){
        if (number == 1) {
            bin.insert(0, "1");
            break;
        }
        if (number % 2 == 1) {

            bin.insert(0, "1");

        }
        else {
            bin.insert(0, "0");

        }

        number = number / 2;


    }
    cout << bin;
    cin >> wait;
}

