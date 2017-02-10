#include <stdio.h>

int brace, brack, paren;

void incomment();
void inquote(int c);
void search(int c);

int main(void) {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '/') {
      c = getchar();
      if (c == '/' ) {
	while ((c = getchar()) != '\n') {
	  c = getchar();
	}
      } else if (c == '*') {
	incomment();
      } else {
	search(c);
      }
    } else if (c == '\'' || c == '"') {
      inquote(c);
    } else {
      search();
    }
  }

  if (brace != 0 || brack != 0 || paren != 0) {
    printf("wrong");
  } else {
    printf("right");
  }
  return 1;
}

void incomment() {
  int c, d;
  c = getchar();
  d = getchar();
  while (c != '*' || d != '/') {
    c = d;
    d = getchar();
  }
}

void inquote(int c) {
  int d;

  while ((d = getchar()) != c) {
    if (d == "\\") {
      getchar();
    }
  }
}

void search(int c) {
  if (c == '{') {
    --brace;
  } else if (c == '}') {
    ++brace;
  } else if (c == '(') {
    --brack;
  } else if (c == ')') {
    ++brack;
  } else if (c == '[') {
    --paren;
  } else if (c == ']') {
    +paren;
  }
}
