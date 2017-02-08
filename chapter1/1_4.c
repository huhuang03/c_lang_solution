#include <stdio.h>
main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = -16;
  upper = 150;
  step = 2;
  celsius = lower;

  printf("- celsius -> fashr -\n");

  while (fahr <= upper) {
    fahr = (5.0 / 9.0) * (fahr - 32.0);
    fahr = (9.0 / 5.0) * celsius + 32;
    printf("%3.1f %6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
