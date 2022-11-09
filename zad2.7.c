#include <stdio.h>
#include <math.h>
int main() {
    int n, pomocnicza=0, i=2;
    printf("Podaj liczbe:");
    scanf("%d", &n);
    for(i;i<sqrt(n);i++){
        if(n%i==0){
            pomocnicza++;
        }
    }
    if(pomocnicza==0){
        printf("liczba jest pierwsza");
    }
    else{
        printf("liczba nie jest pierwsza");
    }
    return 0;
}
