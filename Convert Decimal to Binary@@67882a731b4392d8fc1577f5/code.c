// Your code here...
#include <stdio.h>
int main(){
    int x,p=1;
    long b=0;
    scanf("%d", &x);
    while(x>0){
        b += (x%2) * p;
        p *= 10;
        x /= 2;
    }
    printf("%d", b);
    return 0;
}