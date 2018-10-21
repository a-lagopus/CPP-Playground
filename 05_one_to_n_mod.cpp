#include <stdio.h>
#include <iostream>

// A program that asks the user for a number n and prints the sum of the numbers 1 to n
// 05 - Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17

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
    for(int i=1;i<=number;i++){
        if((i%3==0) || (i%5==0)) sum+=i;
    }
    cout << "Sum of numbers 1 to " << number << " is: " << sum << "\n";
    return 0;
}
