#include <stdio.h>
#include <math.h>

int main() {
int i,j,a=-1;
while (a<0) {
  printf("ile znaków max\n");
  scanf("%d", &a);
}
  //WZOR1
  for (i = 0; i < a; i++) {
    for (j = 0; j < i+1; j++) {
      printf("*");
    }
    printf("\n");
  }
  //WZOR2
  for (i = a; i > 0; i--) {
    for (j = i-1; j > 0; j--) {
      printf("*");
    }
    printf("\n");
  }
  //WZOR3
  for (i = a; i > 0; i--) {
    for (j = i-j; j > 0; j--) {
      printf(" ");
    }
    for (j = i-a; j > 0; j--) {
      printf("*");
    }
    printf("\n");
  }
  /*

  //WZOR4
  for (i = 0; i < a; i++) {
    for (j = 0; j < i+1; j++) {
      printf("*");
    }
    printf("\n");
  }
*/
  return 0;
}
