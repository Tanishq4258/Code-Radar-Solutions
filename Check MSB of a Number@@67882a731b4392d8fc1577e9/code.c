#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int i = 32;
    int marks = 1<<i-1
if(x & marks){
    printf("Set\n");
}
else{
    printf("Not Set");
}
    return 0;
}