#include <iostream>
#include <list>
using namespace std;
int main() {
  list<int> mylist;
  for(int i=0; i< 10; i++) {
    mylist.push_back(i);
  }

  list<int>::const_iterator iter;
  for(iter = mylist.begin(); iter != mylist.end(); iter++) {
   cout<< *iter <<endl;
  }

  return 0;
}
