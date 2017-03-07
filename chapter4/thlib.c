#include "thlib.h"
#include <stdio.h>

static void qsort_iter(int str[], int left, int right);

static void swap(int s[], int i, int j);

void mgetline(char str[], int limit);

void qsort(int str[], int len)
{
  qsort_iter(str, 0, len);
}

void mgetline(char str[], int limit)
{
  int c;
  int i;
  for (i = 0; i < limit -1 && (c = getchar()) != EOF && c != '\n'; i++) {
    str[i] = c;
  }

  if (c == '\n') {
    str[i++] = c;
  }
  str[i] = '\0';
}

void qsort_iter(int str[], int left, int right) {
  printf("sort %d, %d\n", left, right);
  if (left >= right) {
    return;
  }
  int i, last;
  swap(str, left, (left + right) / 2);
  last =  left;

  for (i = left + 1; i <= right; i++) {
    if (str[i] < str[left]) {
      swap(str, ++last, i);
    }
  }

  swap(str, left, last);
  qsort_iter(str, left, last - 1);
  qsort_iter(str, last + 1, right);
}

static void swap(int s[], int i, int j)
{
  int tmp = s[i];
  s[i] = s[j];
  s[j] = tmp;
}
