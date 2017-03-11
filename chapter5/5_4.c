int strend(*s, *t)
{
  while (*s++ != *t)
    ;

  s--;

  while (*t++ == *s++ && *t != '\0')
    ;

  return *t == '\0';
}
