#include<iostream>
#include<vector>
#include<climits>
using namespace std;


void merge(vector <int> &v, int p, int q, int r){
  int n1 = q-p+1;
  int n2 = r-q;
  int L[n1+1];
  int R[n2+1];
  for(int i=1; i<=n1; i++) {
    L[i] = v[p+i-1];
  }
  for(int j=1; j<=n2; j++) {
    R[j] = v[q+j];
  }
  L[n1+1] = INT_MAX;
  R[n2+1] = INT_MAX;
  cout<<"L= ";

  for(int i=0; i< n1+1; i++) {
    cout<< L[i] <<", ";
  }
  cout<<endl;
  cout<<"R= ";
  for(int i=0; i< n2+1; i++) {
    cout<< R[i] <<", ";
  }
  cout<<endl;

  int i=1, j=1;
  for(int k=p;k<=r;k++) {
    if(L[i]<=R[j]) {
      v[k]=L[i];
      i=i+1;
    }
    else {
      v[k]=R[j];
      j=j+1;
    }
  }
}//end merge

void mergeSort(vector <int> &v, int p, int r){
  if(p<r){
    int q = (p+r)/2;
    mergeSort(v,p,q);
    mergeSort(v,q+1,r);
    merge(v,p,q,r);
    cout<<"merge iter.= ";
    for(int i = 0; i<v.size(); i++) {
      cout<< v[i] <<", ";

    }
    cout<<endl;
  }
}

int main() {
  vector <int> v;
  for(int i = 10; i>0; i--) {
    v.push_back(i);
  }
  cout<<"before mergeSort: ";
  for(int i = 0; i<v.size(); i++) {
    cout<< v[i] <<", ";
  }
  cout<< "v.size()=" << v.size() <<endl;
  cout<<endl;
  mergeSort(v,0,v.size()-1);
  cout<<"after  mergeSort: ";
  for(int i = 0; i<v.size(); i++) {
    cout<< v[i] <<", ";
  }
  cout<<endl;
  return 0;
}
