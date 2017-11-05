#include <stdio.h>

int main () {
  int nb, nt, nl;
  int c;
  nb = 0;
  nt = 0;
  nl = 0;

  while ((c=getchar()) != EOF)
  {

    if (c == ’ ’)
        ++nl;
      else if (c == ’\t’)
        ++nb;
      else if (c == ’\n’)
        ++nt;
  }
    printf("%d %d %d\n", nb, nt, nl);
    return 0;
}
