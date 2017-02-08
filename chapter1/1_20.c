#include <stdio.h>
#define TABINC 9

int main() {
  int nb, pos, c;
  nb = 0;
  pos = 1;

  while ((c = getchar()) != EOF) {
    printf("here");
    if (c == '\t') {
      nb = TABINC - ((pos - 1) % TABINC);
      while (nb > 0) {
	putchar('#');
	pos++;
	nb--;
      }
    } else if (c == '\n') {
      putchar(c);
      pos = 1;
    } else {
      putchar(c);
      pos++;
    }
  }
}
