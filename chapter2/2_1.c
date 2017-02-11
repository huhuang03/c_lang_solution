#include <stdio.h>
void printBits(char c);

int main() {
  char c = 10;
  printBits((unsigned char)~0 >> 1);
}

void printBits(char c) {
  for (int i = 0; i < 8; i++) {
    printf("%d", !!((c << i) & 0x80));
  }
  printf("\n");
}
