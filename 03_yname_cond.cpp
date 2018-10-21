#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string user_name("");
    cout << "Enter your name: ";
    cin >> user_name; 
    if( user_name == "Alice" || user_name == "Bob" ) cout << "Greetings," <<user_name << "\n";
    return 0;
}
