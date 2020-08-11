#include <stdio.h>
#include <math.h>

#define N 20

void main() {
  int a, b, c = 0;
  int m = 2;

  while(1) {
    for(int n = 1; n < m; n++) {
      a = m*m - n*n;
      b = 2*m*n;
      c = m*m + n*n;

      printf("%d %d %d %d\n", a, b, c, a+b+c);
      if(1000 % (a+b+c) == 0) {
        int magic = 1000/(a+b+c);
        a*=magic; b*=magic; c*=magic;
        printf("%d*%d*%d = %d\n", a, b, c, a*b*c);
        goto end;
      }
    }
    m++;
  }
  end:
    printf("done");
}
