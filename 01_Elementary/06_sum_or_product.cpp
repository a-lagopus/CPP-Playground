#include <stdio.h>
#include <iostream>
#include <sstream>


// 06 - Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,…,n.

using namespace std;

int main() 
{
    int number,sum,product;
    string choice;
    cout << "Enter the number: ";
    cin >> number;
    if(number<1){
	cout << "Error! Number must be positive" << "\n";
	return 0;
    }
    cout << "Would you like the sum or product? ";
    while(true){
       getline (cin,choice);
       if(choice == "sum" || choice == "Sum"){
          sum = 0;
          for(int i=1;i<=number;i++) sum+=i;
          cout << "Sum of numbers 1 to " << number << " is: " << sum << "\n";
          return 0;
       }
       else if (choice == "product" || choice == "Product"){
	  product = 1;
	  for(int i=1;i<=number;i++) product*=i;
	  cout << "Product of numbers 1 to " << number << " is: " << product << "\n";
	  return 0;
       }
       else{
          cout << "Please select sum or product ";
       }
    }
    return 0;
}
