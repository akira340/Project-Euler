#include <stdio.h>

#define N 15

void main() {
  FILE *fp;
  fp = fopen("euler18.txt", "r");

  int num, h, i, j;
  int array[N][N] = {0};

  for(h = 0; h < N; h++) {
    for(i = 0; i <= h; i++) {
      fscanf(fp, "%d", &num);
      array[h][i] = num;
      //printf("%d ", array[h][i]);
    }
    //printf("\n");
  }
  fclose(fp);
  
  int bigger;
  for(i = N-1; i > 0; i--) {
    for(j = 0; j < i; j++) {
      //printf("%d %d\n", array[i][j], array[i][j+1]);
      if(array[i][j] >= array[i][j+1]) {
        bigger = array[i][j];
      } else {
        bigger = array[i][j+1];
      }
      array[i-1][j] += bigger;
    }
  }
  printf("%d\n", array[0][0]);
}