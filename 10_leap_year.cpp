#include <stdio.h>
#include <iostream>
#include <sstream>

// 10 - Write a program that prints the next 20 leap years.

using namespace std;

int main() 
{
   int year=2018;
   int i,j;
// Rounding up to a nearest leap year if current year is not a leap one
   if(year%4!=0) i=int(year/4)*4+4;
   for(j=0;j<20;j++){
// Additional condition - leap year not divisible by 100, unless divisible by 400
      if((i%100!=0)||(i%400==0)){
         cout << i << "\n";
      }
      else{
         cout << i+4 << "\n";
      }
      i+=4;
   }
   return 0;
}
