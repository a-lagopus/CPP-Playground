#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

bool rotate(list<int> * input, int num){
  list<int>::iterator it=input->begin();
  int swap;
  for(int i=0;i<num;i++){
    swap=input->front();
    input->push_back(swap);
    input->pop_front();
  }
  return true;
}
//Write a function that rotates a list by k elements.
//For example [1,2,3,4,5,6] rotated by two becomes [3,4,5,6,1,2].
//Try solving this without creating a copy of the list. How many swap or move operations do you need?


int main() 
{
  list<int> mylist({1,2,3,4,5,6,7});
  int number=6;
  for(list<int>::iterator it=mylist.begin();it != mylist.end(); ++it) cout<< *it;
  cout << endl;
  rotate(&mylist,number);
  for(list<int>::iterator it=mylist.begin();it != mylist.end(); ++it) cout<< *it;
  cout << endl;
return 0;
}
