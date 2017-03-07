#include "thlib.h"
#include <stdio.h>

int main() {
  char str[1000];
  mgetline(str, 1000);
  printf("%s\n", str);
  return 0;
}
 
