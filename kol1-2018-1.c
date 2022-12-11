#include <stdio.h>

int potega(int x){
    int a=1, n=1, pom=x, g=1;
    for(int i=2; i<=x; i++){
        if(x%i==0 && i<=pom){
            a = i;
            pom = a;
        }
    }
    for(int i=2; i<x; i++){
        if(g*a<x){
            n++;
            g = g*a;
        }
    }
    if(g*a != x){
        printf("%d 1\n", x);
    }
    else{
    printf("%d %d \n", a, n);
    }
}

int main() {
    potega(5);
    potega(7);
    potega(12);
    potega(81);
}
