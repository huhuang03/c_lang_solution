#include <stdio.h>
int strrindex(char s[], char c);

int main() {
  printf("%d\n", strrindex("abcd", 'c'));
  return 0;
}
 
int strrindex(char s[], char c) {
  int i;
  for (i = strlen(s) - 1; i >= 0; i--) {
    if (s[i] == c) {
      break;
    }
  }
  return i;
}
