#include<stdio.h>

void f_c(char msg[]) {
    printf("read:%s\n size of is:%lu\n",msg,sizeof(msg));
    printf("msg[0]=%c\n",msg[0]);
}
void main(){
    char quote[] = "Hello,world!!!";
    f_c(quote);

}


