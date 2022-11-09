#include <stdio.h>
#include <math.h>
int c_p(int n, int i=2){
for(i;i<sqrt(n);i++){
        if(n%i==0){
            pomocnicza++;
        }
    }
    if(pomocnicza==0 && n!=1){
        printf("liczba jest pierwsza");
        return 1;
    }
    else{
        printf("liczba nie jest pierwsza");
        return 0;
    }
    
}

int main() {
    int n, pomocnicza=0, i=2;
    printf("Podaj liczbe:");
    scanf("%d", &n);
    printf("%d", c_p(n));
}
