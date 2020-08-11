#include <stdio.h>
#include <math.h>

#define N 426

void main() {
  int a, b, c;

  for(a = 3; a < N; a++) {
    for(b = a+1; b < N; b++) {
      for(c = b+1; c < N; c++) {
        if(a*a + b*b == c*c) {
          printf("%d, %d, %d\n", a, b, c);
          printf("%d + %d + %d = %d\n\n", a, b, c, a+b+c);
          if(a+b+c == 1000) {
            printf("%d*%d*%d = %d\n\n", a, b, c, a*b*c);
            goto end;
          }
        }
      }
    }
  }
  end:
    printf("done");
}
