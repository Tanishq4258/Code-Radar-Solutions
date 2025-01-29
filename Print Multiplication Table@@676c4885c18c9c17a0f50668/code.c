#include <stdio.h>

int main() {
    int n, i, x;
    scanf("%d", &n);
    for(i=1; i<=10; i+1){
        printf("%d x %d = %d", n, i, n*i);
    }
    return 0;
}