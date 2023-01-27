// MapTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <ctype.h>
#include <chrono>
#include <thread>
#include <cstring>
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

void generateData(map<string, int> &data) {
    //Generate loop
    cout << "Generating random values for stock... " << endl;
    this_thread::sleep_for(3000ms);
    //Value for inventory amount
    int num{ 10 };
    int random;
    srand((unsigned)time(NULL));
    
    for (int i = 0; i < num; i++) {
        //Inventory values 1-10000
        random = 1 + (rand() % 10000);
        //Loop for number of values in map

        cout << random << endl;

    }
}



void insertData(map<string, int>& data) {

}



void displayData(map<string, int>& data) {
    for (auto const& pair : data) {
        cout << "The stock of " << pair.first << " is " << pair.second << endl;
    }
}


int main()
{
    bool valid{ true };
    bool end{ false };
    string amount{};
    cout << "Welcome to the inventory data base" << endl;
    //Declare Maps
    map<string, int> storeStock{
        
        {"tshirt", 0 }, {"undergarment", 0},  {"shoe", 0}, {"tie", 0}, {"sock" , 0}

    };



    
    //Generate
    generateData(storeStock);
    //Menu loop
    char input{};
    do {
        cout << "Welcome to the database!" << "\tWhat would you like to do?" << endl;
        cout << "Type 'i' to insert new values\n";
        cout << "Type 'v' to view the data\n";
        cout << "Type 'g' to generate new values\n";
        cout << "Or type 'q' to quit\n";
        cin >> input;

        if (isupper(input)) {
            tolower(input);
        }
            

        switch (input) {
            case 'i':
                insertData(storeStock);
                break;
            case 'v':
                displayData(storeStock);
                break;
            case 'g':
                cout << "The program will generate 10 new inventory values!" << endl;
                generateData(storeStock);
                break;
            case 'q':
                end = true;
                break;
            default:
                cout << "Invalid input, next time use one of the values listed above" << endl;
                break;
        }

        cout << "Would you like to continue?" << endl << "Please type 'y' or 'n'" << endl;
        cin >> input;


        if ((input == 'y') || (input == 'Y'))
            end = false;
        else if ((input == 'n') || (input == 'N'))
            end = true;
        else
            cout << "Invalid input, returning to main menu";
    
    } while (!end);

    cout << "Thank you for using the Aeos database. Goodbye!";




}


