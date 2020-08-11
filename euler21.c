#include <stdio.h>
#include <math.h>

#define N 10000

int d(int n) {
  int sum = 1;
  int i, j;

  for(i = 2; i <= sqrt(n); i++) {
    if(n%i == 0) {
      sum += i + n/i;
    }
  }
  return sum;
}

void main() {
  int a, b, sum, count = 0;

  sum = 0;
  for(a = 2; a <= N; a++) {
    b = d(a);
    if(d(b) == a && a != b) {
      printf("%d\n", a);
      sum += a;
      count++;
    }
  }
  printf("count: \n%d\n", count);
  printf("sum: %d\n", sum);
}
