#include <stdio.h>
int main() {
   int n;
   n=546;
   int d=2, a= 0, maxfact;
   while(n!=0) {
      if(n % d !=0)
         d= d + 1;
      else {
         maxfact = n;
         n = n / d;
         if(n == 1) {
            printf("%d is the largest prime factor !",maxfact);
            a= 1;
            break;
         }
      }
   }
   return 0;
}