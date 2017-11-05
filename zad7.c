#include <stdio.h>
#include <math.h>

int main() {
int i,j,a,b;
printf("szachownica ile na ile\n");
scanf("%d %d", &a, &b);
  for (i = 0; i < a; i++) {
    for (size_t j = 0; j < b; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
