#include <stdio.h>
#define S_NORMAL = 0
#define S_IN_COMMENT_SINGLE_LINE = 1
#define S_IN_COMMENT_DOUBLE_LINE = 2
#define S_CHECK_ENTER_COMMENT = 3
#define S_CHECK_LEAVE_COMMENT = 4
#define S_IN_SINGLE_QUOTE = 5
#define S_IN_DOUBLE_QUOTE = 6

int context = S_NORMAL;

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    if (context == S_IN_SINGLE_QUOTE) {
      if (c == '\\') {
	putchar(getchar());
      } else if (c == '\'') {
	putchar(c);
	context = S_NORMAL;
      }  else {
	putchar(c);
      }
    } else if (context == S_DOUBLE_SINGLE_QUOTE) {
      if (c == '\\') {
	putchar(getchar());
      } else if (c == '"') {
	putchar(c);
	context = S_NORMAL;
      } else {
	putchar(c);
      }
    } else if (context == S_IN_COMMENT_SINGLE_LINE) {
      if (c == '\n') {
	putchar(c);
	context = S_NORMAL;
      }
    } else if (context == S_NORMAL) {
      if (c == '\\') {
	context = S_CHECK_ENTER_COMMENT;
      } else if (c == '\''){
	putchar(c);
	context = S_IN_SINGLE_QUOTE;
      } else if (c == '"') {
	putchar(c);
	context = S_IN_DOUBLE_QUOTE;
      } else {
	putchar(c);
      }
    } else if (context == S_CHECK_ENTER_COMMENT) {
      if (c == '\\') {
	context = S_IN_COMMENT_SINGLE_LINE;
      } else if (c == '*') {
	context = S_IN_COMMENT_DOUBLE_LINE;
      } else {
	putchar('\\');
	putchar(c);
      }
    } else if (context == S_IN_COMMENT_DOUBLE_LINE) {
      if (c == '*') {
	context = S_CHECK_LEAVE_COMMENT;
      }
    } else if (context == S_CHECK_LEAVE_COMMENT) {
      if (c == '/') {
	context = S_NORMAL;
      } else {
	putchar('*');
	pubchar(c);
      }
    }
  }
}
