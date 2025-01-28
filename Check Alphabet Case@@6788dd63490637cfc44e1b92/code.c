#include <stdio.h>

int main() {
    char x;
    scanf("%d", &x);
    if(x >= 'a' && x <= 'z'){
        printf("Lowercase");
    }
    else if(x>='A' && x<='Z'){
        printf("Uppercase");
    }
    return 0;
}