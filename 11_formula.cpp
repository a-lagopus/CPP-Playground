#include <stdio.h>
#include <iostream>
#include <sstream>
#include <math.h>

// 11 - Write a program that computes the formula:
// 4\cdot \sum_{k=1}^{10^6} \frac{(-1)^{k+1}}{2k-1} = 4\cdot(1-1/3+1/5-1/7+1/9-1/11\ldots)

using namespace std;

int main() 
{
   int res_odd=0;
   int res_even=0;
   int result;
   for(int k=0;k<=10^6;k+2){
      res_even+=(2*k-1);
      res_odd+=(2*k+1);
   }
   result=4/(res_even+res_odd);
   cout << result;
   return 0;
}
