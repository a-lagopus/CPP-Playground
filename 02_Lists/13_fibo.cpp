#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

list<int> fibo(int num){
  list<int> result;
  int fib1=1;
  int fib2=1;
  for(int i=0;i<num;i++){
    if(i<2) result.push_back(1);
    else{
      result.push_back(fib1+fib2);
      fib1=fib2;
      fib2=result.back();
    }
  }
  return result;
}

//Write a function that computes the list of the first 100 Fibonacci numbers.
//The first two Fibonacci numbers are 1 and 1.
//The n+1-st Fibonacci number can be computed by adding the n-th and the n-1-th Fibonacci number.
//The first few are therefore 1, 1, 1+1=2, 1+2=3, 2+3=5, 3+5=8.

int main() 
{
  int num = 9;
  list<int> result;
  
  result= fibo(num);
  for(list<int>::iterator it=result.begin();it != result.end(); ++it) cout<< *it << " ";
  cout << endl;
return 0;
}
