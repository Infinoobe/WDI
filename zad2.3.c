#include <stdio.h>

int main() {
    int l,p, pomocnicza, n=1;
    printf("Podaj liczbe linii i liczbe par, która ma wystepować:");
    scanf("%d %d",&l, &p);
    pomocnicza = p;
    for(l;l>0;l--){
        p = pomocnicza;
        if(n%2==1){
            for(p; p>0; p--){
                printf("#*");
                
            }
            printf("\n");
            n++;
        }
        else{
            for(p; p>0; p--){
                printf("*#");
                
            }
            printf("\n");
            n++;
        }
    }
    

    return 0;
}
