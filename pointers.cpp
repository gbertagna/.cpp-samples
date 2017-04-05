/* ------------
 * Passing an array 
#include <iostream>
using namespace std;
int main()
{
string name;
int MAX = 4;
string group[MAX];

for( int i = 0; i < MAX; i++ )
{
cin>> name;
group[i] = name;
}
//  *group[i] = &name;
//  string *p_name = &name;
//  cout<< "*p_name: " << *p_name <<endl;
return 0;
}
*/


#include <iostream>
using namespace std;

void passbyref(int &ptr) {
  ptr = ptr +1;
}

void passbyaddress(int* value) {
  value = value +1;
}

int main()
{
  int i = 42;
  cout << "i = " << i << endl;
  cout << "&i= " << &i << endl;

  cout << "choose what to pass by: " << endl;
  cout << "(1) pass by reference" << endl;
  cout << "(2) pass by address" << endl;
  int choice = 0;
  cin>> choice;
  if(choice == 1 || choice == 2) {
    switch(choice) {
      case 1:
        passbyref(i);
        cout << "pass by reference: i= " << i << endl;
        cout << "&i= " << &i << endl;
        break;
      case 2:
        passbyaddress(&i);
        cout << "pass by address: i= " << i << endl;
        cout << "&i= " << &i << endl;
        break;
    }
  }

  /**
   * visually checking how values change
   *
   int *ptr = &i;
   cout<< "i = " << i <<endl;
   ptr = 99;
   cout<< "i = " << i <<endl;
   cout<< "&i = " << &i <<endl;
   cout<< "ptr = " << ptr <<endl;
   cout<< "*ptr = " << *ptr <<endl;
   cout<< "&ptr = " << &ptr <<endl;
   */

  return 0;
}

