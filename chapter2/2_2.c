#include <stdio.h>
void getline(char s[], int limit);

void getline(char s[], int limit) {
  for (int i = 0; i < limit; ++i) {
    int c = getchar();
    if (c != '\n') {
      if (c != EOF) {
	s[i] = c;
      }
    }
  }
}
