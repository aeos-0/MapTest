// MapTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <ctype.h>
#include <chrono>
#include <thread>
using namespace std;


//Testing out maps in C++


void num_check(string& input, bool &valid) {
    for (char value : input) {
        if (isdigit(value))
            continue;
        else {
            cout << "Non number value found in string" << endl;
            valid = false;
            break;
        }
    }
}




int main()
{
    bool valid{ true };
    bool end{ false };
    int rand;
    string amount{};
    cout << "Welcome to the inventory data base";
    //Declare Maps
    map<string, int> storeStock{};
    //Value for inventory amount
    int num{ 10 };

    cout << "Generating random values for stock... " << endl;
    this_thread::sleep_for(3000ms);
    
    for (int i = 0; i < num; i++) {
        //Generate values for the amount specified by the user
        cout << ".";
        
    }




}


