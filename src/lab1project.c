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
  input[i + 1] = '0';
  printf("\n");

  char *pointer = input;
  doublePointer = &pointer;

  
  char *start = word_start(pointer);
  printf("%c\n", *start);

  char *end = word_end(pointer);
  printf("%c\n", *end);

  int counter = count_words(pointer);
  printf("%d\n", counter);

  char *copy = copy_str(pointer, 3);
  printf("%s\n", copy);

  print_tokens(doublePointer);

 

}

