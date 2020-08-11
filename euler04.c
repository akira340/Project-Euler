#include <stdio.h>

void main() {
  
  int i, a, b, c, rev, max;

  a = 999; max = 0;

  while(a >= 100) {
    b = 999;
    while(b >= 100) {
      c = a * b;
      rev = 0;
      while(c > 0) {
        rev = (rev * 10) + (c % 10);
        c /= 10;
      }
      if(rev == a*b) {
        //printf("%d x %d = %d\n", a, b, rev);
        if(rev > max) {
          max = rev;
        }
      }
      b--;
    }
    a--;
  }
  printf("%d\n", max);
}
