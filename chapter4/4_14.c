#include <stdio.h>

#define swap(t, x, y) { t _z;\
    _z = x; x = y; y = _z; }

int main() {
  char x = 'a';
  char y = 'b';
  printf("x = %c, y = %c\n", x, y);
  swap(char, x, y);
  printf("x = %c, y = %c\n", x, y);
  return 0;
}
 
