#include <stdio.h>
#include <string.h>
void itob(int i, char s[], int b);
char i2char(int i);
void revert(char s[]);

int main() {
  int i = 16;
  char s[500];
  itob(i, s, 16);
  printf("%s", s);
  return 0;
}

void itob(int i, char s[], int b) {
  int k = 0;
  do {
    s[k++] = i2char(i % b);
  } while ((i /= b) > 0);
  s[k++] = '\0';
  revert(s);
}

char i2char(int i) {
  if (i >= 0 && i <= 9) {
    return i + '0';
  } else if (i >= 10 && i <= 20) {
    return (i - 10) + 'a';
  }
  return '?';
}
 
void revert(char s[]) {
  int i, j;
  i = 0;
  j = strlen(s);
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    int c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
