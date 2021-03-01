#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#define LIMIT 100
char c;

int main(){

  char input[LIMIT];
  char **doublePointer;

  int i;

  for(;(c = getchar()) != '\n' && i < LIMIT - 1; i++){
    input[i] = c;
    putchar(c);
  }
  input[i + 1] = '\0';
  printf("\n");

  doublePointer = tokenize(input);
  printf("Tokenizing\n");
  print_tokens(doublePointer);

}

