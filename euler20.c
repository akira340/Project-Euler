#include <stdio.h>

#define SIZE 200
#define N 100

void main() {
  int i, j, index = 0;
  int bigNumber[SIZE] = {0};
  int sum = 0;
  
  bigNumber[0] = 1;

  for(i = 2; i <= N; i++) {
    for(j = 0; j <= index; j++) {
      bigNumber[j] *= i;
    }
    for(j = 0; j <= index; j++) {
      if(bigNumber[j] >= 10) {
        bigNumber[j+1] += bigNumber[j]/10;
        bigNumber[j] %= 10;
      }
      if(bigNumber[index] > 0) index++;
    }
  }
  printf("%d\n", index);
  for(i = index-1; i >= 0; i--) {
    printf("%d", bigNumber[i]);
    sum += bigNumber[i];
  }
  printf("\n%d", sum);
}
