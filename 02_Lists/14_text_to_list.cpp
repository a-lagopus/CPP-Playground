#include <stdio.h>
#include <iostream>
#include <list>
#include <string>


using namespace std;

list<int> my_parser(string input){
  list<int> result;
  for(int i=0;i<input.size();i++){
    if(input[i] >=48 && input[i] <=57) result.push_back(input[i]-48);
  }
  return result;
}
//Write a function that takes a number and returns a list of its digits.
//So for 2342 it should return [2,3,4,2].

int main() 
{
  string input = "123456789";
  list<int> result;
  result= my_parser(input);
  for(list<int>::iterator it=result.begin();it != result.end(); ++it) cout<< *it << " ";
  cout << endl;
return 0;
}
