#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int a,b,c;

  printf("Podaj 3 liczby\n");
  scanf("%d %d %d", &a, &b, &c);

  switch ((a*a)+(c*c)) && ((b*b)+(c*c)) && ((b*b)+(a*a))) {
    case (b*b):
    case (a*a):
    case (c*c):printf("Trojka pitagorejska\n");
    break;
  }

  /*
  if (a>0 & b>0 & c>0){
    if ((a*a)+(b*b)==(c*c)) {
      printf("Trojka pitagorejska\n");
    }
    if ((a*a)+(c*c)==(b*b)) {
      printf("Trojka pitagorejska\n");
    }
    if ((c*c)+(b*b)==(a*a)) {
      printf("Trojka pitagorejska\n");
    }
  } else {
    printf("podaj normalne cyfry\n");
  }
  return 0;
  */
}
