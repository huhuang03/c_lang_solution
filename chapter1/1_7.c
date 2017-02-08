#include <stdio.h>

main() {
  printf("%d\n", EOF);
  for (int i = 2147483000; i >= 100; i += 1) {
    printf("%d\n", i);
  }
  printf("%d\n", 2147483648);
  printf("%d\n", 'a');
  printf("%d\n", 'b');
}
