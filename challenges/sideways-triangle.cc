#include <iostream>

int main(void) {
  int row = 30; // Amount of Rows

  // Loop through each row
  for (int i = 0; i < row; i++) {
    // Loop through each column of row
    for (int j = 0; j <= i; j++)
      // print out #
      std::cout << "#";
    std::cout << "\n";
  }
  for (int i = row - 1; i >= 1; i--) {
    for (int j = 0; j < i; j++) {
      std::cout << "#";
    }
    std::cout << "\n";
  }
}
