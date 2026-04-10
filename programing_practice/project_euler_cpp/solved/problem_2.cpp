#include<stdio.h>

int main(){
    int fib = 1; 
    int fib_b = 1 ;
    int sum = 0;
    while(true){
        fib += fib_b;
        fib_b = fib - fib_b;
        if(fib >= 4000000){
            break;
        } 
        if( !(fib % 2) ){
            sum += fib;
        }
        
    }
    printf("Sum: %d\n", sum);
}