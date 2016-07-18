#include<stdio.h>
#include<stdlib.h>

int main() {
    int decks;
    puts("enter number of decks");
    scanf("%i",&decks);
    if(decks<1) {
        puts("not vaild");
        return 1;
    }
    printf("there are %i cards\n",(decks*52));
    return 0;

}





