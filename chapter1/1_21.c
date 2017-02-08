#include <stdio.h>
#define TABINC 8

int main() {
  int ns, c, nt;
  ns = 0;
  nt = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ns++;
    } else {
      nt = ns / TABINC;
      ns = ns % TABINC;

      while (nt > 0) {
	putchar('t');
	nt--;
      }

      while (ns > 0) {
	putchar('#');
	ns--;
      }
      putchar(c);
    }
  }
}
