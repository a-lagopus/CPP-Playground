#include <stdio.h>
#include <iostream>

//04 - A program that asks the user for a number n and prints the sum of the numbers 1 to n

using namespace std;

int main() 
{
    int number,sum;
    cout << "Enter the number: ";
    cin >> number;
    sum = 1;
    for(int i=1;i<=number;i++){
	sum+=i;
    }
    cout << "Sum 1 to n is: " << sum << "\n";
    return 0;
}
