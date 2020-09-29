#include <stdio.h>
#include <stdbool.h>

int main(){
    int number = 1;
    int divisible(int num){
        for(int i = 1; i <= 20; i++){
            if(num % i != 0) return false;
        }
        return true;
    }
    while(true){
        if(divisible(number)) break;
            else number++;
    }
    printf("%d", number);
}
