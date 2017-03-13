void compair(char a, char b, int caseS) {
  return caseS? a == b : (a - 26) == b || (a + 26) == b;
}
