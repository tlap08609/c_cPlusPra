#include<stdio.h>

void gse(int* lat,int* lon) {
    *lat = *lat-1;
    *lon = *lon+1;
}

void main() {
    int lati = 32;
    int longi = -64;
    gse(&lati,&longi);
    printf("now at:[%i,%i]\n",lati,longi);
}
