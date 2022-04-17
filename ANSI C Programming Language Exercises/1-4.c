#include <stdio.h>

int main() {

  printf("--------------------------\n      THE CELSIULATOR     "
         "\n--------------------------\n");

  int celsius, fahr;

  int step = 10; // show celsius -> fahrenheit every 10 degrees
  int lowerbound = 0;
  int upperbound = 200;

  celsius = upperbound;
  while (celsius >= lowerbound) {
    fahr = (9 * celsius) / 5 + 32;
    printf("%6d %10d\n", celsius, fahr);
    celsius -= step;
  }
}
