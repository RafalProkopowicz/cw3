#include <stdio.h>
#include <math.h>

int main() {
int i,j,a=-1,b=-1;
while (a<0 || b<0) {
  printf("szachownica ile na ile\n");
  scanf("%d %d", &a, &b);
}
  for (i = 0; i < a; i++) {
    for (size_t j = 0; j < b; j++) {
      putchar(*);
      //printf("* ");
    }
    printf("\n");
  }
  return 0;
}
