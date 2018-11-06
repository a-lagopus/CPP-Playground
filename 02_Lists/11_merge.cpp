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

//Write a function that merges two sorted lists into a new sorted list.
//[1,4,6],[2,3,5] → [1,2,3,4,5,6].
//You can do this quicker than concatenating them followed by a sort.

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
