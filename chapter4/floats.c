#include <stdio.h>
#include "floats.h"

int sp = 0;
double val[MAXVAL];

void push(double f)
{
  if (sp < MAXVAL) {
    val[sp++] = f;
  } else {
    printf("error: stck full, can't push %g\n", f);
  }
}

double pop(void)
{
  if (sp > 0) {
    return val[--sp];
  } else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

double top(void) {
  if (sp > 0) {
    return val[sp - 1];
  } else {
    printf("error: stack empty\n");
    return 0.0
  }
}

void doubleTop() {
  push(top());
} 

void exchange() {
  if (sp < 2) {
    printf("error: exchange has less then two element");
  } else {
    int top1 = pop();
    int top2 = pop();
    push(top1);
    push(top2);
  }
}

void empty() {
  sp = 0;
}
