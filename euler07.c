#include <stdio.h>

void main() {
  long long int i = 2, j;
  int count = 0;

  while(1) {
    if(count == 10001) {
      break;
    }
    for(j = 2; j <= i; j++) {
      if(i == j) {
        count++;
        printf("%d: %lld\n", count, i);
      } else if(i%j == 0) {
        break;
      }
    }
    i++;
  }
}
