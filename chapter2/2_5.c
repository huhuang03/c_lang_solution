#include <stdio.h>
int any(char s1[], char s2[]);

int main() {
  printf("%d\n", any("abcdefg", "bc"));
  printf("%d\n", any("abcdefg", "cde"));
  printf("%d\n", any("abcdefg", "aie"));
  return 0;
}

int any(char s1[], char s2[]) {
  int j;
  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    int k = i;
    for (j = 0; s2[j] != '\0' && s2[j] == s1[k]; j++, k++) {
      ;
    }
    if (s2[j] == '\0') {
      return i;
    }
  }
  return -1;
}
