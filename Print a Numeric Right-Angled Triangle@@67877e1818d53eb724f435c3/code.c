#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j; j<=N; j++){
            printf("%d", i);
        }
        printf("\n")
    }
    return 0;
}