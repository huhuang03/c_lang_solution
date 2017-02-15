#include <stdio.h>

void escape(char s[], char t[]) {
  int i, j;
  i = j = 0;
  while (t[i] != '\0') {
    switch (t[i]) {
    case '\t':
      s[j] = '\\';
      ++j;
      s[j] = 't';
      break;
    case '\n':
      s[j] = '\\';
      ++j;
      s[j] = 'n';
      break;
    default:
      s[j] = t[i];
    }
    ++i;
    ++j;
  }
  s[j] = '\0';
}

void de_scape(char s[], char t[]) {
  int i, j;
  i = j = 0;
  char c = s[i];
  char d = s[i + 1];
  while (c != '\0' && d != '\0') {
    if (c == '\\' && d == 't') {
      d[j] = '\t';
      i+=2;
    } else if (c == '\\' && d == 'n') {
      d[j] = '\n';
      i+=2;
    } else {
      d[j] = c;
      i++;
    }
    c = s[i];
    d = s[i + 1];
    j++;
  }
}
