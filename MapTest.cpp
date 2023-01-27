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



void generateData(map<string, int>& data) {
    //Generate loop
    cout << "Generating random values for stock... " << endl;
    this_thread::sleep_for(3000ms);
    //Value for inventory amount
    int num{ 5 };
    int random;
    srand((unsigned)time(NULL));

    for (int i = 0; i < num; i++) {
        //Inventory values 1-10000
        //Loop for number of values in map
        for (auto& value : data) {
            random = 1 + (rand() % 10000);
            value.second = random;
        }
        //cout << random << endl;

    }

    cout << "New stock has been successfully generated!" << endl;
}



void insertData(map<string, int>& data) {
    int number;
    string item;
    cout << "Enter the new item followed by the amount youd like to stock!" << endl;
    cin >> item >> number;
    data.insert({ item, number });
    cout << "Creating data..." << endl;
    this_thread::sleep_for(1000ms);
    cout << "The new item '" << item << "' has been added with a stock of " << number << endl;
}



void displayData(map<string, int>& data) {
    cout << "Loading system data..." << endl;
    this_thread::sleep_for(2000ms);
    cout << "-------------------------" << endl;
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
        cout << "-------------------------" << endl;
        cout << "This is the Aeos database system!" << "\tWhat would you like to do?" << endl;
        cout << "Type 'i' to insert new values\n";
        cout << "Type 'v' to view the data\n";
        cout << "Type 'g' to generate new values\n";
        cout << "Or type 'q' to quit\n" << "-------------------------" << endl;
        cin >> input;


        //Menu
        switch (input) {
        case 'i':
            insertData(storeStock);
            break;
        case 'v':
            displayData(storeStock);
            break;
        case 'g':
            cout << "The program will generate 5 new inventory values!" << endl;
            generateData(storeStock);
            break;
        case 'q':
            end = true;
            break;
        default:
            cout << "Invalid input, next time use one of the values listed above" << endl;
            break;
        }



    } while (!end);

    cout << "Thank you for using the Aeos database. Goodbye!";




}