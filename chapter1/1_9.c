#include <stdio.h>

main() {
  int iss = 0;
  int c;
  while ((c = getchar) != EOF) {
    if (c == ' ') {
      if (!iss) {
	iss = 1;
	putchar();
      }
    } else {
      putchar();
    }
  }
}
