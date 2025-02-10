#include <stdio.h>

int main(){
    int i,j,k,l,N;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
       for(j=1;j<=n-i; j++){
        printf(" ");
       } 
       for(k=1; k<=2*i-1; k++){
        printf("*");
       }
       for(l=0; l<=2*(n-i)-2; l++){
        printf(" ");
       }
    }
    
}