#include <string.h>
# include <stdio.h>

# define BUFSIZE 1000
# define MAXLINE 1000

void mgets(char[], int);
void ungets(char s[]);

int getch();
void ungetch(int);

int main() {
  char s[MAXLINE];

  mgets(s, MAXLINE);
  ungets(s);

  int c;
  while ((c = getch()) != EOF)
    putchar(c);
  
  return 0;
}

int bufp;
int buf[BUFSIZE];

void mgets(char line[], int limit) {
  int c, i;
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = 0;
  }

  if (c == '\n') {
    line[++i] = c;
  }
  line[i] = '\0';
}

int getch() {
  return bufp > 0 ? buf[--bufp] : getchar();
}

void ungetch(int c) {
  if (bufp < BUFSIZE) {
    buf[bufp++] = c;
  } else {
    printf("error: buffer is full!!");
  }
}

void ungets(char s[]) {
  int i = strlen(s);

  while (i > 0)
    ungetch(s[--i]);
}
