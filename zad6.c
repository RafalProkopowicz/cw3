#include <stdio.h>
#include <math.h>
 int main() {
   int a,i,b;

   printf("Daj liczbe\n");
   scanf("%d", &a);

   if (a>0){
     for (i = 0; i < a; i++) {
       printf("%d ", a);
     }

     printf("\n");

     for (i = 0; i < a; i++) {
       b=a*a;
       printf("%d ", b);
     }
   }
   return 0;
 }
