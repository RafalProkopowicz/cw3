#include <stdio.h>
#include <math.h>

int main() {
  int a,b;
  printf("Daj 2 liczby\n");
  scanf("%d %d", &a, &b);
  (a>b)?printf("a jest wieksza\n"): printf("b jest wieksza\n");
  return 0;
}
