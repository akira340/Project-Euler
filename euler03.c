#include <stdio.h>

void main() {
  long long int a = 600851475143;//13195;
  long long int b = 2;
  
  while(a > b) {
    if(a % b == 0) {
      a /= b;
      b = 2;
    } else {
      b += 1;
    }
  }
  printf("Largest Prime Factor: %ld\n", b);

}
