#include <stdio.h>

int main(){
    int N,i,j,x;
    x = 1;
    scanf("%d". &N);
    for(i=0, i<=N; i++){
        for(j=0; j<=i, j++){
            printf("%d ", x++);
        }
        printf("\n");
    }
}