#include <stdio.h>

#define N 20

void main() {
  long long int grid[N+1][N+1];
  
  int i, j;

  for(i = 0; i < N+1; i++) {
    for(j = 0; j < N+1; j++) {
      grid[i][j] = 1; grid[j][i] = 1;
    }
  }

  for(i = N-1; i >= 0; i--) {
    for(j = N-1; j >= 0; j--) {
      grid[i][j] = grid[i+1][j] + grid[i][j+1];
    }
  }
  printf("%lld\n", grid[0][0]);
}
