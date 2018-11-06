#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

bool merge(list<int> * a,list<int> * b,list<int> * c){
  while (!a->empty() && !b->empty())
  {
    if(a->front() <= b->front()){
      c->push_back(a->front());
      a->pop_front();
    }else{
      c->push_back(b->front());
      b->pop_front();
    }
  }
  while (!a->empty()){
    c->push_back(a->front());
    a->pop_front();
  }
  while (!b->empty()){
    c->push_back(b->front());
    b->pop_front();
  }
  return 0;
}
//Write a function that rotates a list by k elements.
//For example [1,2,3,4,5,6] rotated by two becomes [3,4,5,6,1,2].
//Try solving this without creating a copy of the list. How many swap or move operations do you need?


int main() 
{
  list<int> list1({1,3,5,7,9,10,11,22});
  list<int> list2({2,4,6,8,12});
  list<int> list3({});
  for(list<int>::iterator it=list1.begin();it != list1.end(); ++it) cout<< *it << " ";
  cout << endl;
  for(list<int>::iterator it=list2.begin();it != list2.end(); ++it) cout<< *it << " ";
  cout << endl;
  merge(&list1,&list2,&list3);
  for(list<int>::iterator it=list3.begin();it != list3.end(); ++it) cout<< *it << " ";
  cout << endl;
return 0;
}
