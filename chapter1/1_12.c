#include <stdio.h>

main() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n') {
      putchar("\n");
    } else {
      putchar(c);
    }
  }
}
