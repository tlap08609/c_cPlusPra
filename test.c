#include<stdio.h>

void main() {
    int a;
    int b;
    for(a = 1 ; a<=9;a++){
        for(b = 1;b<=9;b++) {
            printf("%i*%i=%i  ",a,b,(a*b));
        }
        printf("\n");
    
    }
}
