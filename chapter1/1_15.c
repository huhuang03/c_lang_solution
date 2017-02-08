#include <stdio.h>

float fahr2celsius(int);

main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  while (fahr <= upper) {
    printf("%3.0f %6.1f\n", fahr, fahr2celsius(fahr));
    fahr = fahr + step;
  }
  return 0;
}

float fahr2celsius(int fahr) {
  return (5.0 / 9.0) * (fahr - 32.0);
}
