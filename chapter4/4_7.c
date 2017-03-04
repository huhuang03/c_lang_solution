# include <stdio.h>

# define BUFSIZE 1000
# define MAXLINE 1000

void mgets(char[], int);
void ungets(char s[]);

int getch();


void ungetch(int);

int main() {

  return 0;
}

int bufp;

void mgets(char[] line, int limit) {
  int c, i;
  for (i = 0; i < limit - 1 && (c = getch()) != EOF && c != '\n'; i++) {
    line[i] = 0;
  }

  if (c == '\n') {
    line[++i] = c;
  }
  line[i] = '\0';
}
