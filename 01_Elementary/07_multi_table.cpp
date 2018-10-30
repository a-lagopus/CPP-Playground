#include <stdio.h>
#include <iostream>
#include <sstream>

//Write a program that prints a multiplication table for numbers up to 12.

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
