Definition : The scope resolution operator (::) specifies the scope of a referenced identifier.

Program :

#include <iostream>
using namespace std;

int x = 10; //Global variable x declared

int main() {
  int x = 8; //Local variable x declared
  //Accessing global x using ::
  cout << "Value of global x is " << ::x << endl;
  cout << "Value of local x is " << x << endl;
  return 0;
}