#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

//Write a function that computes the running total of a list.


int my_runningtot(list<int> input){
  int result=0;
  for(list<int>::iterator it=input.begin();it != input.end(); ++it){
    result += *it;
  }
  return result;
  }

int main() 
{

  list<int> mylist({1});
  for(int i=2;i<11;i++){
    cout << my_runningtot(mylist) << " ";
    mylist.push_back(i);
 }
 cout << "\n";

return 0;
}
