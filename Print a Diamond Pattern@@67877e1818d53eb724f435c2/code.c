#include <stdio.h>

int main(){
    int i,j,k,l,N;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
       for(j=1;j<=N-i; j++){
        printf(" ");
       } 
       for(k=1; k<=2*i-1; k++){
        printf("*");
       }
       printf("\n");
    }
    for(i=1; i<=N-1; i++){
        for(k=0; k<=N-1; k++){
            printf(" ");
        }
        for(j=N-1; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
    
}