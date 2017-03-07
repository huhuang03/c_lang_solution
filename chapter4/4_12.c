#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAXLINE 1000

void itoa(int, char[]);

int main() {
  int i = -1234;
  char str[MAXLINE];
  itoa(i, str);
  printf("%s\n", str);
  return 0;
}

 
void itoa(int n, char s[]) {
  static int i;
  if (n / 10)
    itoa(n / 10, s);
  else
    {
      i = 0;
      if (n < 0)
	s[i++] = '-';
    }
  s[i++] = abs(n) % 10 + '0';
  s[i] = '\0';
}
