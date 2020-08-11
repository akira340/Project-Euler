#include <stdio.h>

#define POWER 1000

void main() {
  int digits[500] = {0};
  int i, index = 0, sum = 0;

  digits[0] = 1;
  
  for(i = 0; i < POWER; i++) {
    int j, carry = 0, product = 1;
    for(j = 0; j <= index; j++) {
      product = (digits[j] << 1) + carry;
      digits[j] = product % 10;
      carry = product / 10;

      if(carry != 0 && j == index) {
        index++;
      }
    }
  }
  
  for(i = 0; i <= index; i++) {
    sum += digits[i];
  }
  printf("%d\n", sum);
}
