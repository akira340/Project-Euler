#include <stdio.h>

void main() {
  int first = 1, second = 1, next = 0, sum = 0;
  
  while(sum < 4000000) {
    next = first + second;
    first = second;
    second = next;
    
    if(next % 2 == 0) {
      sum += next;
    }
  }
  
  printf("%d\n", sum);

}
