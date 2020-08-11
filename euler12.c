#include <stdio.h>
#include <math.h>

#define N 500

void main() {
  int i = 1, j, counter;
  long int triangle = 0;

  while(1) {
    triangle += i;
    counter = 0;
    //printf("%ld\n", triangle);
    for(j = 1; j <= sqrt((double)triangle); j++) {
      if(triangle%j == 0) {
        if(triangle == sqrt((double)triangle)) {
          counter++;
        } else {
          counter += 2;
        }
      }
    }
    if(counter >= N) {
      break;
    }
    i++;
  }
  printf("%ld %d\n", triangle, counter);
}

