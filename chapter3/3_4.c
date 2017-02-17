#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void revert(char[]);
void itoa(int, char[]);
int abs(int);

int main() {
  char str[MAXLINE];

  int num;
  num = -(int)((unsigned int) ~0 >> 1) - 1;

  printf("%d \n", num);
  itoa(num, str);
  printf("%s\n", str);
  return 0;
}

void itoa(int i, char str[]) {
  int k = 0;
  do {
    str[k++] = abs(i % 10);
  } while ((i /= 10) > 0);
  str[k] = '\0';
  revert(str);
}

void revert(char arr[]) {
  int c, i, j;
  for (i = 0, j = strlen(arr) - 1; i < j; i++, j--) {
    c = arr[i], arr[i] = arr[j], arr[j] = c;
  }
}

int abs(int i) {
  return i >= 0? i : -i;
}

