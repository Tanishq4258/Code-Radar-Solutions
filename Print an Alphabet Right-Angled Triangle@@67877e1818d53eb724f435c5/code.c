#include <stdio.h>

int main(){
    int N, i, j;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        for(j=64; j<=i+63; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
}