#include <stdio.h>

int main(){
    int i, j, palindrome, max;
    int check(int num){
        int reversedNum = 0;
        while(num){
        reversedNum = 10 * reversedNum + (num % 10);
        num /= 10;
        }
        return reversedNum == num;
    }
    for(i = 100; i < 1000; i++){
        for(j = 100; j < 1000; j++){
            palindrome = i * j;
            if(check(palindrome) && palindrome > max) max = palindrome;
        }
    }
    printf("%d\n", palindrome);
    return 0;
}
