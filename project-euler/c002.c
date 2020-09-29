#include <stdio.h>

int main(){
    unsigned int t1 = 1, t2 = 1, t3 = 1, sum = 0;
    while (t3 <= 4000000){
        if(t3 % 2 == 0) sum += t3;
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    printf("%u\n", sum);
    return 0;
}
