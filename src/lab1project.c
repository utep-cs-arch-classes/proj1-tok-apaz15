#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#define LIMIT 100
char c;

int main(){

  int i;

  while(1){
    char *inputPointer = (char*)malloc(LIMIT);
    for(i = 0; (c = getchar()) != '\n' && i < LIMIT - 1; i++){
      *(inputPointer + i) = c;
    }
    *(inputPointer + i) = '\0';

  
  char *start = word_start(inputPointer);
  printf("%c\n", *start);

  char *end = word_end(inputPointer);
  printf("%c\n", *end);

  int counter = count_words(inputPointer);
  printf("%d\n", counter);

  }

}

