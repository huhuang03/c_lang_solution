void strncpy(char *s, char *t, int);

void strncpy(char *s, char *t, int n)
{
  for (int i = 0; i < n; i++) {
    if (*t != '\0') {
      *s = *t;
      s++;
      t++;
    }
  }

  if (*s != '\0')
    *s = '\0';
}

void strncat(char *s, char *t, int n)
{
  while (*s++)
    ;
  s--;

  strncpy(s, t, n);
}

void strncmp(char *s, char *t, int n)
{
  for (int i = 0; (*s == *t) && i < n; s++, t++)  {
    if (*s == '\0' || i == n) {
      return 0;
    }
  }
  return *s - *t;
}
