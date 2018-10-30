#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

// Write a function that returns the largest element in a list.

int get_largest_element(list<int>* input){
int largest;
list<int>::iterator it=input->begin();
largest = *it;

for(it=input->begin(); it != input -> end(); ++it)
  if(largest < *it) largest = *it;

return largest;
}

int main() 
{
int largest;
list<int> mylist({1,2,3,4,5,6,7,6,5,4,3,2,1,9,77,111111,2,1,4,5});
cout << get_largest_element(&mylist) << "\n";
return 0;
}
