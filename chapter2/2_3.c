#include <stdio.h>

int hex2int(char s[], int len);

int main() {
  printf("%d", hex2int("0x10", 4));
  return 0;
}

int hex2int(char s[], int len) {
  int rst = 0;
  for (int i = 2; i < len; i++) {
    int item = 0;
    if (s[i] >= '0' && s[i] <= '9') {
      item = s[i] - '0';
    } else if (s[i] >= 'a' && s[i] <= 'f') {
      item = s[i] - 'a' + 10;
    } else if (s[i] >= 'A' && s[i] <= 'F') {
      item = s[i] - 'A' + 10;
    }
    rst = 16 * rst + item;
  }
  return rst;
}
