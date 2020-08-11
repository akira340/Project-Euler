#include <stdio.h>

#define N 1000000

long long int even(long long int n) {
  return n/2;
}

long long int odd(long long int n) {
  return 3*n+1;
}

void main() {
  long long int i, n, longest;
  int seq, max = 0;

  for(i = 2; i <= N; i++) {
    n = i;
    seq= 1;
    if(i%1000 == 0) printf("%lld\n", i);
    while(1) {
      if(n == 1) break;
      //printf("%lld\n", n);
      if(n%2 == 0) {
        n = even(n);
        seq++;
      } else {
        n = odd(n);
        seq++;
      }
    }
    //printf("%d\n", seq);
    if(seq > max) {
      max = seq;
      longest = i;
    }
  }
  printf("%d %lld\n", max, longest);
}
