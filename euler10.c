#include <stdio.h>
#include <math.h>

#define N 2000000

void main() {
  unsigned long long int i, j, sum = 0;
  long long int counter = 0;
  
  for(i = 2; i < N; i++) {
    for(j = 2; j <= i/2; j++) {
      if(i == j) {
        //printf("%d ", i);
        sum += i;
        counter++;
      } else if(i%j == 0) {
        break;
      }
    }
    if(i % 100000 == 0) {
      printf("ok %lld\n", i);
    }
    if(i == N/2) {
      printf("half\n");
    }
  }
  printf("%lld\n%lld\n", sum, counter);
}
