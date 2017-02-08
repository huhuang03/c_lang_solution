#include <stdio.h>
#define MAXLINE 1000


int getline(char line[], int maxline);
void rTrim(char line[], int len);

main() {
  int len;
  char line[MAXLINE];
  while (( len = getline(line, MAXLINE) ) > 0) {
    int newLen = rtrim(line, len);
    if (newLen > 1) {
      printf("%s", line);
    } 
  }

  return 0;
}

int getline(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n', ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int rtrim(char line[], int len) {
  int trimLen = len;
  for (int i = len - 1; i >= 0; i--) {
    if (line[i] == '\t' || line[i] == ' ') {
      trimLen--;
    } else {
      break;
    }
  }
  line[trimLen] = '\0'
  return trimLen;
}
