#include <stdio.h>

int main() {
    int m;
    scanf("%d",&m);
    if(m>=90){
        printf("A");
    }
    else if(90>m>=80){
        printf("B");
    }
    else if(80>m>=70){
        printf("C");
    }
    else if(70>m>=60){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}