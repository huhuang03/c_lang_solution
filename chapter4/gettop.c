#include <ctype.h>
#include <stdio.h>
#include "gettop.h"
#include "getch.h"

int gettop(char s[]) {
  int i, c;
  while ( (s[0] = c = getch()) == ' ' || c == '\t')
    ;

  s[1] = '\0';

  i = 0;

  if (c == '-') {
    c = getch();
    ungetch(c);
    if (isspace(c)) {
      return '-';
    } else {
    }
  }

  if (!isdigit(c) && c != '.') {
    return c;
  }

  if (isdigit(c) || c == '-')
    while (isdigit(s[++i] = c = getch()))
      ;
  if (c == '.')
    while (isdigit(s[++i] = c = getch()))
      ;

  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}
