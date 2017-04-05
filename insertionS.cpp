#include<iostream>
#include<vector>
using namespace std;



int main() {
  vector<int> myarray;
  int j= 10;
  for(int i=0; i<11; i++) {
    myarray.push_back(j);
    j=j-1;
  }

  cout<< "begin: ";
  for(int i=0; i<myarray.size(); i++) {
    cout<< myarray[i] << ", ";
  }
  cout<<endl;

  int key = 0;
  int i = 0;

  for(int j=0;j<myarray.size();j++) {
    key = myarray[j];
    i = j-1;
    while(i>=0 && myarray[i] > key) {
      myarray[i+1] = myarray[i];
      i = i-1;
    }
    myarray[i+1] = key;
  }
  cout<< "  end: ";
  for(int i=0; i<myarray.size(); i++) {
    cout<< myarray[i] << ", ";
  }
  cout<<endl;
  return 0;
}
