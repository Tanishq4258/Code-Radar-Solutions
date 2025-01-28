#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    switch(x){
        case 1||3||5||7||8||10||12: printf("31");break;
        case 4||6||9||11: printf("30");break;
        case 2: printf("28");break;
        default:printf("Invald month");
    }
    return 0;
}