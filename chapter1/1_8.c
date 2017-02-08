#include <stdio.h>

main() {
  long specc = 0;
  long tabc = 0;
  long nlc = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      specc++;
    } else if (c == '\t') {
      tabc++;
    } else if (c == '\n') {
      nlc++;
    }
  }
  printf("空格个数：%d, 制表符个数：%d，换行符个数：%d\n", specc, tabc, nlc);
}
