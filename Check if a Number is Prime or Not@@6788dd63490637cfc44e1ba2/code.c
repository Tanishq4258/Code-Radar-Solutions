#include <stdio.h>

int main() {
    int n, i=2, prime = 1;
    scanf("%d",&n);
    if(n<=1){
        prime = 0;
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                prime = 0;break;
            }
        }
    }
if(prime){
    printf("Prime");
}
else{
    printf("Not Prime");
}
    return 0;
}