#include <stdio.h>

#define WEEK 7
#define YEAR 365

void main() {
  int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int week = 1;
  int i, j, count = 0;

  for(i = 1900; i <= 2000; i++) {
    if(i%4 == 0 && i != 1900) {
      month[1] = 29;
    } else {
      month[1] = 28;
    }
    for(j = 0; j < 12; j++) {
      if(week == 0 && i > 1900) {
        printf("%d %d\n", i, j+1);
        count++;
      }
      week += month[j];
      //printf("%d\n", week);
      week %= 7;
    }
  }
  printf("%d\n", count);
}