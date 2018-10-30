#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

//Write a function that returns the elements on odd positions in a list.


list<int> my_oddposition(list<int> input){
  list<int> output;
  list<int>::iterator it=input.begin();
  for(int i=0;i<input.size();i+=2){
      output.push_back(*it);
      advance(it,2);
  }
  return output;
  }

int main() 
{

  list<int> mylist({1,2,3,4,5,6,7,8,9,10,11,12,13,14});
 list<int> myoutput;
 for(list<int>::iterator it=mylist.begin();it != mylist.end(); ++it){
   cout << *it << " ";
 }
 
 cout << "\n";
 
 myoutput = my_oddposition(mylist);
 for(list<int>::iterator it=myoutput.begin();it != myoutput.end(); ++it){
   cout << *it << " ";
 }
 
 cout << "\n";

return 0;
}
