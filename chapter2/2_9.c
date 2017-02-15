#include <stdio.h>
int bitcount(unsigned);

int main() {
  printf("%d\n", bitcount(0x37));
  return 0;
}

int bitcount(unsigned x) {
  int rst;
  for (rst = 0; x != 0; x &= x - 1) {
    rst++;
  }
  return rst;
}
