#include <iostream>

using namespace std;

struct Vector {
  float x;
  float y;
  float z;
};

int main () {
  Vector v;
  
  v.x = 20;
  v.y = 30.5;
  v.z = 40.10;

  cout << "Elements of Vector: " << v.x << ", " << v.y << ", "  << v.z << endl;
}
