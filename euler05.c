#include <stdio.h>

int gcd(int a, int b) {
  int tmp, r;
  if(a >= b) {
    tmp = a; a = b; b = tmp;
  }
  r = b%a;
  while(r != 0) { // b/a = c + r
    b = a; a = r;
    r = b%a;
  }
  return a;
}

int lcm(int a, long long int b) {
  long long int c = (a*b) / gcd(a,b);
  return c;
}

void main() {
  long int i, a, b;
  a = 1;
  b = 2;

  for(a = 1; a <= 20; a++) {
    printf("%d %d", a, b);
    b = lcm(a,b);
    printf(" = %d\n", b); 
  }
  printf("%d\n", b);
}
