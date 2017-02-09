#include <stdio.h>
#define TABINC 8
#define MAXCOL 10

void hlineFull(char line[]);
void printLine(char line[], int pos);
void inputChar(char c);
void hcopyLine(char line[], int start);
int findPrintPos(char lint[]);

char line[MAXCOL];
int pos = 0;

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      for (int i = 0; i < 8; i++) {
	inputChar(' ');
      }
    } else {
      inputChar(c);
    }
  }
}

void hlineFull(char line[]) {
  int newLinePos = -1;
  for (int i = 0; i < MAXCOL; i++) {
    if (line[i] == '\n') {
      newLinePos = i;
      break;
    }
  }
  if (newLinePos >= 0) {
    printLine(line, newLinePos - 1);
    hcopyLine(line, newLinePos + 1);
  } else {
    int printPos = findPrintPos(line);
    printLine(line, printPos);
    hcopyLine(line, printPos + 1);
  }
}

void printLine(char line[], int pos) {
  int i = 0;
  while (pos >= 0) {
    putchar(line[i]);
    pos--;
    i++;
  }
  putchar('\n');
}

void inputChar(char c) {
  line[pos] = c;
  pos++;
  if (pos >= MAXCOL) {
    hlineFull(line);
  }
}

void hcopyLine(char line[], int start) {
  int k = 0;
  for (int i = start; i < MAXCOL; i++) {
    line[k] = line[i];
    k++;
  }
  pos = k;
}

int findPrintPos(char line[]) {
  int rst = MAXCOL - 1;
  for (int i = MAXCOL - 1; i >= 0; i--) {
    if (line[i] == ' ') {
      rst = i;
      break;
    }
  }
  return rst;
}
