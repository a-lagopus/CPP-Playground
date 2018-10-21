#include <stdio.h>
#include <iostream>

//04 - A program that asks the user for a number n and prints the sum of the numbers 1 to n

using namespace std;

int main() 
{
    int number,sum;
    cout << "Enter the number: ";
    cin >> number;
    if(number<1){
	cout << "Error! Number must be positive" << "\n";
	return 0;
    }
    sum = 0;
    for(int i=1;i<=number;i++)  sum+=i;
    cout << "Sum of numbers 1 to " << number << " is: " << sum << "\n";
    return 0;
}
