#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

bool palindrom(string* input){
  for(int i=0;i<input->length()/2;i++){
    if((*input)[i] != (*input)[input->length()-1-i]){
      return false;  
    }
  }
  return true;
}

//Write a function that tests whether a string is a palindrome.
int main() 
{
  string pali="laserboreherobresal";
  cout << pali <<  "\n";
  if(palindrom(&pali)) cout << "yes";
  else cout << "no";
  cout << "\n";

return 0;
}
