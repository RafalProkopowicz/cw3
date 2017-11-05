#include <stdio.h>
#include <math.h>

int main() {
  double a,b;
  printf("Podaj 2 liczby\n");
  scanf("%lf %lf", &a, &b );
  printf("%d\n", a+b); //dodawanie
  printf("%d\n", a-b); //odejmowanie
  printf("%d\n", a*b); //mnożenie
  printf("%d\n", a/b); //dzielenie
  printf("%d\n", (int)a|(int)b); //
  printf("%d\n", (int)a&(int)b); //
  printf("%d\n", a||b); //
  printf("%d\n", a&&b); //

  //0 - fałsz
  //1 - prawda
  printf("%d\n", a>=b); //wieksze równe
  printf("%d\n", a<b); //mniejsze
  printf("%d\n", a>b); //wieksze
  printf("%d\n", a==b); //równe
  printf("%d\n", a>=b); //wieksze równe

  printf("%d\n", (int)a>>(int)b); //przesuniecie bitowe w prawo
  printf("%d\n", (int)a<<(int)b); //przesuniecie bitowe w lewo
  return 0;
}
