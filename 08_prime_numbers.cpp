#include <stdio.h>
#include <iostream>
#include <limits>
#include <math.h> 

//Write a program that prints all prime numbers


using namespace std;

int main() 
{
   unsigned int max_unsigned_int_size = std::numeric_limits<unsigned int>::max();
   unsigned int i,j;
   bool number_is_prime;
   for(i=1;i<=max_unsigned_int_size;i++){
      //Check the number for being a prime one
      number_is_prime=true;
      for(j=2;j<=sqrt(i);j++){
         if(i%j == 0){
         number_is_prime=false;
	 break;
	 }
      }
   if(number_is_prime) cout << i << "\n";
   }
   return 0;
}
