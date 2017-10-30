#include <iostream>

using namespace std;

int main () {
  int x = 22;
  int *intPointer;

  cout << "Address of X: " << &x << endl; // Print the variable-x's address
  intPointer = &x; // Atribute the address 
  cout << "The int pointer stored the value: " << *intPointer << endl;
}
