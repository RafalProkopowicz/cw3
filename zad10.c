#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int n=-1,i,a=0;

  do {
    printf("Daj l. naturalna\n");
    scanf("%d", &n);
  } while(n<0);
  
  for (i = 0; i < n+1; i++) {
    a=a+i;
  }
  printf("%d\n", a);
  return 0;
}
