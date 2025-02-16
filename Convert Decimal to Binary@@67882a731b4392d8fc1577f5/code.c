// Your code here...
#include <stdio.h>
int main(){
    int x,b=0,p=1;
    scanf("%d", &x);
    while(x>0){
        b += x%2 * p;
        p *= 10;
        x /= 2
    }
    printf("%d", b);

}