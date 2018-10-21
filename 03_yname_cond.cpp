#include <stdio.h>
#include <iostream>
#include <string>

/* 03 - A program that asks the user for their name and greets them with their name
but only if their name is Alice or Bob*/

using namespace std;

int main() 
{
    string user_name("");
    cout << "Enter your name: ";
    cin >> user_name; 
    if( user_name == "Alice" || user_name == "Bob" ) cout << "Greetings," <<user_name << "\n";
    return 0;
}
