#include <ctype.h>
#include <string>

void getline(char *s, int limit) {
  for (int i = 0; i < limit - 1 && (c = getch()) != EOF && c != '\n'; i++) {
    *s++ = c;
  }

  if (c == '\n') {
    *s = '\n';
  }
}

int atoi(char *s) {
  while (isspace(*s++))
    ;

  int rst = 0;
  while (isdigit(*s++)) {
    rst = 10 * rst + (*s - '0')
  }
  return rst;
}

// 不考虑溢出
int itoa(char *s, int i) {
  while (i / 10) {
    *s++ = i % 10;
    i = i / 10;
  }
  *s++ = i % 10;
  *s = '\0';
  reverse(s);
}

void reverse(char *s)
{
  int len = strlen(s);
  for (int i = 0, j = len - i; i < j; i++) {
    char tmp = *(s + i);
    *(s + i) = *(s + j);
    *(s + j) = *(s + i);
    j = len - i;
  }
}

void strinex(char *s, char c)
{
  int i = 0;
  for (;*s != 'c' && *s != '\0'; s++) {
    i++;
  }
  if (s == 'c') {
    return i;
  } else {
    return -1;
  }
}

void getop() {
  if (bufp > buf) {
    return *--bufp;
  } else {
    printf("error, stack is empty");
  }
}
