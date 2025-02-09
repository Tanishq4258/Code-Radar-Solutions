#include <stdio.h>
int main() {
   int N, i, j, number = 1;
   scanf("%d", &N);
   for (i = 1; i <= N; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}