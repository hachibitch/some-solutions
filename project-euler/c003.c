#include <stdio.h>

int main() {
   long long num = 600851475143, div, maxFactor;
   for(div = 2; num != 1; div++){
        if(num % div == 0){
        maxFactor = div;
        num /= div;
        }
   }
   printf("%d\n", maxFactor);
}
