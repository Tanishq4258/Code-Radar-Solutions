#include <stdio.h>

int main() {
    int x;
    scanf("5d", &x);
    if(x>0){
        printf("Above Freezing");
    }
    else{
        printf("Freezing");
    }
    return 0;
}