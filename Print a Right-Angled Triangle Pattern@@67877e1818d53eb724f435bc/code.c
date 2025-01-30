#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i--){
        for(j=i;j<=N-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}