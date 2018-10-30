#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <map>

/*Write a guessing game where the user has to guess a secret number. After every guess the program tells
the user whether their number was too large or too small. At the end the number of tries needed should
be printed. It counts only as one try if they input the same number multiple times consecutively.*/

using namespace std;

int main(){
   int target, test;
   map<int, int> tried_values;
   srand (time(NULL));
   target = rand() % 20;
   while(test != target){
   cout << "Your guess:";
   cin >> test;
   if(test > target) cout << "Too large\n";
   if(test < target) cout << "Too small\n";
   tried_values.insert(std::pair<int,int>(test,0));
   }
   cout << "Success, took " << tried_values.size() << " attempts\n";
   return 0;
}
