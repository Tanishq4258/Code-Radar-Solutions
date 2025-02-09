#include <stdio.h>

int main(){
    int N, i,j,k;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        for(j=1; j<=N-i; j++){
            printf(" ");
        }
        for(k=65; k<=N+64; k++){
            printf("%c ", j);
        }
        printf("\n");
    }
}