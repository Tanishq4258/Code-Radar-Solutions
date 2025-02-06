#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    x = x^(1<<y);
    printf("%d", x);
}