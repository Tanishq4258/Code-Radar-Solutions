#include <stdio.h>

int main(){
    int N,i,j;
    scanf("%d", &N);
    for(i=0; i<=N; i++){
        for(j=65; j<=N-i+64; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
}