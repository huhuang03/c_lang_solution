#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

void push(double f) {
  if (sp < MAXVAL) {
    val[sp++] = f;
  } else {
    printf("error: stck full, can't push %g\n", f);
  }
}

double pop(void) {
  if (sp > 0) {
    printf val[--sp];
  } else {
    printf("error: stack empty\n");
    return 0.0;
  }
}
