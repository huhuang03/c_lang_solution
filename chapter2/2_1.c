#include <stdio.h>
void printBits(char c);

int main() {
  char c;
  c = -(char)((unsigned char)~0 >> 1) - 1;
  printf("Minimum Singed Char %d\n", c);
  printf("Maxinum Singed Char %d\n", (char)((unsigned char) ~0 >> 1));

  printf("Minimum Singed Short %d\n", -(short)((unsigned short)~0 >> 1) - 1);
  printf("Maxinum Singed Short %d\n", (short)((unsigned short) ~0 >> 1));

  printf("Minimum Singed Int %d\n", -(int)((unsigned int)~0 >> 1) - 1);
  printf("Maxinum Singed Int %d\n", (int)((unsigned int) ~0 >> 1));

  printf("Minimum Singed Long %ld\n", (long)((unsigned long)~0 >> 1) - 1);
  printf("Maxinum Singed Long %ld\n", (long)((unsigned long) ~0 >> 1));

  printf("Maxinum Unsigned  Char: %d\n", (unsigned char)~0);
  printf("Maxinum Unsigned  Short: %d\n", (unsigned short)~0);
  printf("Maxinum Unsigned  Int: %u\n", (unsigned int)~0);
  printf("Maxinum Unsigned  Long: %lu\n", (unsigned long)~0);
  
  printBits(c);
}

void printBits(char c) {
  for (int i = 0; i < 8; i++) {
    printf("%d", !!((c << i) & 0x80));
  }
  printf("\n");
}
