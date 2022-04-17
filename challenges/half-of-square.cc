#include <iostream>

int main() {
  // Amount of hashes
  int x = 5;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x - i; j++)
      std::cout << "#";
    std::cout << "\n";
  }
}
