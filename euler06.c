#include <stdio.h>

void main() {
  int i;
  long long int sumOfSquare = 0, squareOfSum = 0;
  for(i = 1; i <= 100; i++) {
    sumOfSquare += i*i;
    squareOfSum += i;
  }
  squareOfSum *= squareOfSum;
  printf("%lld - %lld = %lld\n", squareOfSum, sumOfSquare, squareOfSum - sumOfSquare);
}
