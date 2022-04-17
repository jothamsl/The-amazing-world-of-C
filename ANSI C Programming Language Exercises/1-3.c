#include <stdio.h>

#define UPPER 300 // Upper limit of temperature scale
#define LOWER 0   // lower limit of temperature scale
#define STEP 20   // Step size

int main() {

  printf("--------------------------\n      THE FAHRCULATOR     "
         "\n--------------------------\n");

  int fahr, celsius;

  fahr = LOWER;
  while (fahr <= UPPER) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%6d %14d\n", fahr, celsius);
    fahr += STEP;
  }
}
