#include <stdio.h>
#include <iostream>
#include <string>

//2 - A program that asks the user for their name and greets them with their name.

using namespace std;

int main() 
{
    string user_name("");
    cout << "Enter your name: ";
    cin >> user_name;  
    cout << "Greetings," <<user_name << "\n";
    return 0;
}
