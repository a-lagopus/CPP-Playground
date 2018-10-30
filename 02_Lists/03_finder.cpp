#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

//Write a function that checks whether an element occurs in a list.

bool my_finder(list<int>* input, int value){
  bool i=false;
  for(list<int>::iterator it=input->begin();it != input->end(); ++it){
    if(*it == value) return true;
 }
  return false;
  }

int main() 
{

 list<int> mylist({1,2,3,4,5,6,7,8,9,10});
  
 cout << my_finder(&mylist,3);
 cout << "\n";

return 0;
}
