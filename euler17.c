#include <stdio.h>
#include <string.h>

#define N 1000

void main() {
  FILE *fp;
  fp = fopen("euler17.txt", "r");

  char str[100];
  long int letters[N+1] = {0};
  int i = 0;

  while(fscanf(fp, "%s", str) != EOF) {
    //printf("%s\n", str);
    
    if(i < 20) {
      i++;
      letters[i] = strlen(str);
    } else if(i < 100) {
      i+=10;
      letters[i] = strlen(str);
    } else {
      i = 1000;
      letters[i] = strlen(str);
    }
    //printf("%ld\n", letters[i]);
  }
  fclose(fp);

  long int sum = 0;
  for(i = 1; i < N+1; i++) {
    if(i < 21) {
    } else if(i < 100) {
      letters[i] = letters[i-(i%10)] + letters[i%10];
    } else if(i < 1000) {
      if(i % 100 == 0) {
        if(i == 100) {
          letters[i] = 10;
        } else {
          letters[i] = letters[i/100] + 7;
        }
      } else {
        letters[i] = letters[i-(i%100)] + 3 + letters[i%100]; //one hundred and twenty one
      }
    }
    sum += letters[i];
    //printf("%d: %ld\n", i, letters[i]); 
  }
  printf("%ld\n", sum);
}