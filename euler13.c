#include <stdio.h>

#define N 13

void main() {
  FILE *fp;
    fp = fopen("euler13.txt", "r");

  int x[100][50];
  int sum[50] = {0};
  int sum2 = 0;
  int i, j;

  for(i = 0; i < 100; i++) {
    for(j = 0; j < 50; j++) {
      fscanf(fp, "%1d", &x[i][j]);
    }
  }

  for(j = 1; j <= 50; j++) {
    sum2 = 0;
    for(i = 0; i < 100; i++) {
      sum[50-j] += x[i][50-j];
      sum2 += x[i][50-j];
    }
    if(50-j == 0) break;
    sum[50-j-1] += sum[50-j] / 10;
    sum[50-j] %= 10;
  }
  
  for(i = 0; i < 50; i++) {
    printf("%d", sum[i]);
    if(i == 10) printf("|");
  }
  printf("\n");

}
