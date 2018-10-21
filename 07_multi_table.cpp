#include <stdio.h>
#include <iostream>
#include <sstream>


// 06 - Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,…,n.

using namespace std;

int main() 
{
   int n;
   int i,j;
   string separator(51,'-');
   cout << "    ";
// Print top row
   for(i=1;i<=12;i++) printf("%3d ",i);
   cout << "\n" << separator << "\n";
// Start printing multiplication rows
   for(i=1;i<=12;i++){
      printf("%3d|",i);
      for(j=1;j<=12;j++) printf("%3d ",i*j);
      cout << "\n";
   }
   return 0;
}
