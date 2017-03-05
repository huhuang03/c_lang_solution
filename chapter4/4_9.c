// define buf as int type, to handle EOF
// because EOF is -1 defined in stdio.h
#include <stdio.h>

#define BUFSIZE  1000
int bufp = 0;
int buf[BUFSIZE];

void putch(int);
int getch();


int main() {
  putch('*');
  int c;

  while ((c = getch()) != EOF) {
    putchar(c);
  }


  return 0;
}

void putch(int i) {
  if (bufp > BUFSIZE) {
    printf("buffer is full");
  } else {
    buf[bufp++] = i;
  }
}
 
int getch() {
  if (bufp <= 0) {
    return getchar();
  } else {
    return buf[--bufp];
  }
}
