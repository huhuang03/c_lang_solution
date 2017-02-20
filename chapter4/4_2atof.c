#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

int main() {
  printf("%g\n", atof("1.0e-10"));

  return 0;
}
 

double atof(char s[]) {
  double val, power;
  int i, sign;
  i = 0;

  for (;isspace(s[i]); i++) {
    // donothing
  }
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-') {
    i++;
  }

  for (val = 0.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
  }

  if (s[i] == '.') {
    i++;
  }
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }

  val = sign * val / power;

  if (s[i] == 'e' || s[i] == 'E') {
    i++;
    sign = s[i] == '-' ? -1 : 1;

    if (s[i] == '-' || s[i] == '+') {
      i++;
    }

    double eval = 0;

    for (power = 1.0; isdigit(s[i]); i++) {
	eval = 10 * eval + (s[i] - '0');
    }

    if (eval != 0) {
	if (sign > 0) {
	    val *= 10 * eval;
	} else {
	    val *= 1 / (10 * (eval));
	}
    }
  }


  return val;
}
