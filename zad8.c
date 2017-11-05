#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int n,i,a=1;
  printf("podaj n\n");
  scanf("%d", &n);
  if (n>0) {
    for (i = 1; i < n+1; i++) {
      a=a*i;
    }
    printf("%d\n", a);

    //WHILE
    i=1;
    a=1;
    while (i < n+1) {
      a=a*i;
      i++;
    }
    printf("%d\n", a);

    return 0;
  }
}
