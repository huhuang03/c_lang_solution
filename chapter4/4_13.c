#include "thlib.h"
#include <stdio.h>
#include <string.h>
#define MAXLINE 100

void reverse(char s[]);

int main() {
  char s[MAXLINE];
  mgetline(s, MAXLINE);

  reverse(s);
  printf("%s\n", s);
  return 0;
}

void reverse(char s[]) {
  void reverse_iter(char s[], int i, int len);

  reverse_iter(s, 0, strlen(s));
}
 
void reverse_iter(char s[], int i, int len) {
  int j = len - 1 - i;
  if (i < j) {
    char tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;

    reverse_iter(s, i + 1, len);
  }
}
