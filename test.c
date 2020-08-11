#include <stdio.h>

#define N 600851475143

void main() {
  int t = 0, u, isPrime;
  long int i, j, n = N;
  long int prime[100];

  for(u = 0; u < 100; u++) prime[u] = 0;

  printf("prime factors for the number %ld is\n", n);
  for(i = 2; i < N/2; i++) {
    for(j = 2; j <= i; j++) {
      isPrime = 1;
      if(i % j == 0) {
        isPrime = 0;
        break;
      }
    }
  }
  printf("\n");
}
