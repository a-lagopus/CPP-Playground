#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

//Write function that reverses a list, preferably in place.

int my_reversal(list<int>* input){
  input->reverse();
  return 0;
  }

int main() 
{
int largest;
list<int> mylist({1,2,3,4,5,6,7});
 
 my_reversal(&mylist);
 for(list<int>::iterator it=mylist.begin();it != mylist.end(); ++it){
   cout << *it << " ";
 }
 cout << "\n";
 //cout << get_largest_element(&mylist) << "\n";
return 0;
}
