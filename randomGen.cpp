#include <iostream>
#include <chrono>
#include <random>
using namespace std;
int main(){
  int n1 = 500;
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);
  uniform_int_distribution<int> distribution(1,n1);
  cout<< "random numbers: ";
  for(int i=0; i<10; i++) {
    cout<< distribution(generator) <<" ";
  }
  cout<<endl;
  cout<< "random number between 1 and 500: ";
  cout<< distribution(generator) <<endl;
  cout<< "random number between 1 and 500: ";
  cout<< distribution(generator) <<endl;
  cout<< "random number between 1 and 500: ";
  cout<< distribution(generator) <<endl;
  cout<< "random number between 1 and 500: ";
  cout<< distribution(generator) <<endl;
  return 0;
}
