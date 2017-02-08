
#include <stdio.h>
#define MAXLINE 1000


int getLine(char line[], int maxline);
void reverse(char input[], char rst[], int len);

int main() {
  int len;
  char line[MAXLINE];
  char rst[MAXLINE];
  while (( len = getLine(line, MAXLINE) ) > 0) {
    reverse(line, rst, len);
    printf("%s", rst);
  }

  return 0;
}

// 不考虑溢出
int getLine(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void reverse(char input[], char rst[], int len) {
  rst[len] = '\0';
  rst[len - 1] = input[len - 1];
  for (int i = 0; i < len - 1; i++) {
    rst[i] = input[len - 2 - i];
  }
}
