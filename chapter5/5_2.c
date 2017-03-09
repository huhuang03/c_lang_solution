#include <stdio.h>
#include <ctype.h>
int getch(void);
void ungetch(int);

int getint(int *pn);

int getint(float *pn)
{
  int c, sign;
  while (isspace(c = getch()))
    ;

  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c);
    return 0;
  }

  sign = (c == '-') ? -1 : 1;

  int tmp;
  if ((c == '+' || c == '-') && !isdigit(tmp = getch())) {
    ungetch(tmp);
    ungetch(c);
    return 0;
  }

  if (c == '+' || c == '-')
    c = getch();
  for (*pn = 0; isdigit(c); c = getch()) {
    *pn = 10 * *pn + (c - '0');
  }
  *pn *= *sign;

  int decimalNum = 0;
  int decimal = 0;

  if (c == '.') {
    for (c = getch(); isdigit(c); c = getch()) {
      dicimalNum++;
      decimal = 10 * decimal + (c - '0');
    }
  }

  *pn += (decimal / (10.0 * decimalNum));
  if (c != EOF)
    ungetch(c);
  return c;
}
