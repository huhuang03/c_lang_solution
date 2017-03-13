/**
   使用函数指针表示比较和交换函数
 */

#define MAXLINES 5000
char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *));

int numcmp(char *, char *);


int main() {
  int numeric = 0;
  // parse numeric

  qsort((void **)lineptr, 0, nlines - 1,
	(int (*) (void *, void*)) (numeric? numcmp : strcmp));

  return 0;
}

void qsort(void *v[], int lef, int right, int (*comp) (void *, void *))
{
  for (i = left + 1; i <= right; i++)
    {
      if ((*comp)(v[i], v[left]) < 0)
	swap(v, ++last, i);
    }
}
