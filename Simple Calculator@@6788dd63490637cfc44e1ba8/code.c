#include <stdio.h>

int main() {
    int x,y;
    char o;
    scanf("%d %d %c" &x,&y,&o);
    switch(o){
        case '+': printf("%d", x+y); break;
        case '-': printf("%d", x-y); break;
        case '*': printf("%d", x8y); break;
        case '/': printf("%d", x/y); break;
        default: printf("error");
    }
    return 0;
}