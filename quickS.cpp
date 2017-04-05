#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> &v, int p, int r){
  int x=v[r];
  cout<< "x= " << x <<endl;
  int i=p-1;
  for(int j=p; j<= r-1; j++){
    if(v[j] <= x){
      i = i+1;
      swap(v[i],v[j]); 
    }
  }
  swap(v[i+1],v[r]);
  return i+1;
}
void quicksort(vector<int> &v, int p, int r){
  if(p<r){
    int q = partition(v,p,r);
    cout<<"q= " << q <<endl;
  for(int i = 0; i<v.size(); i++) {
    cout<< v[i] <<", ";
  }
    quicksort(v,p,q-1);
    quicksort(v,q+1,r);
  }
}

int main(){
  vector <int> v;
  for(int i = 10; i>4; i--) {
    v.push_back(i);
  }
  cout<<"before quicksort: ";
  for(int i = 0; i<v.size(); i++) {
    cout<< v[i] <<", ";
  }
  cout<< "v.size()=" << v.size() <<endl;
  cout<<endl;
  int p=0;
  int r=v.size()-1; 
  quicksort(v,p,r);
  cout<<"after quicksort: ";
  for(int i = 0; i<v.size(); i++) {
    cout<< v[i] <<", ";
  }
  cout<<endl;
  return 0;
}

