#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream myfile;
  myfile.open("test1.txt");
  string line;
  while(myfile.is_open()) {
    while(getline(myfile, line)){
    cout<< line <<endl;
    }
    myfile.close();
  }
  return 0;
}
