#include <stdio.h>
unsigned getbits(unsigned x, int p, int n);
unsigned setbits(int x, int p, int n, int y);

int main() {
  printf("%d\n", setbits(0x13, 3, 4, 0x06));
  return 0;
}

unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p - (n - 1))) & ~(~0 << n);
}
 
unsigned setbits(int x, int p, int n, int y) {
  unsigned i = x & (~0 << n);
  unsigned j = getbits(y, n - 1, n);
  return i | j;
}
