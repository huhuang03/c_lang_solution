#include <stdio.h>
#define MAXLINE 1000

#define LINE_TOO_LONG 1
#define LINE_NOT_TOO_LONG 0

int getline(char line[], int maxline);
void copy(char to[], char from[]);
int isLineTooLong(char line[], int len);


main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  int maxS;

  int curMaxS;
  int preLineIsTooLong;

  curMaxS = 0;

  preLineIsTooLong = LINE_NOT_TOO_LONG;

  max = 0;
  while (( len = getline(line, MAXLINE) ) > 0) {
    if (preLineIsTooLong) {
      curMaxS += len;
    } else {
      curMaxS = len;
    }
    preLineIsTooLong = isLineTooLong(line, len);
    if (len > max) {
      max = len;
      copy(longest, line);
    }

    if (maxS < curMaxS) {
      maxS = curMaxS;
    }
  }

  if (max > 0) {
    printf("%s\nthe length is: %d", longest, maxS);
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

void copy(char to[], char from[]) {
  int i;
  i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}

int isLineTooLong(char line[], int len) {
  return line[len - 1] != '\n';
}
