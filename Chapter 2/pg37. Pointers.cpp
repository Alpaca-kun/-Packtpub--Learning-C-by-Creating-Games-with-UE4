#include <iostream>

using namespace std;

struct Vector {
  float x, y, z;
};

struct Player {
  string name;
  int hp;
  Vector position;
};

int main () {
  Player player;
  Player *playerPointer;

  playerPointer = &player;

  cout << "Digit your name: ";
  cin >> player.name;

  player.hp = 100.0;
  player.position.x = player.position.y = player.position.z = 0;

  playerPointer->hp -= 33;

  cout << "Actual status of the Hero" << endl;
  cout << "Player name: " << player.name << "   " << "HP: " << player.hp << endl;
  cout << "X: " << player.position.x << endl <<
          "Y: " << player.position.y << endl <<
          "Z: " << player.position.z << endl;
}
