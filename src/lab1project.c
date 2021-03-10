#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#define LIMIT 100
char c;

int main(){

  char input[LIMIT];
  char **doublePointer;
  List *history = init_history();

  int i = 0;
  printf("$ ");

  for(;(c = getchar()) != '\n' && i < LIMIT - 1; i++){
    input[i] = c;
    putchar(c);
  }
  input[i + 1] = '\0';
  printf("\n");

  int numOfWords = count_words(input);
  printf("Number of words: %d\n", numOfWords);

  printf("Get history\n");
  add_history(history, input);
  // add_history(history, "Hi Alex");
  char *c = get_history(history, 0);
  printf("%s\n", c);

  doublePointer = tokenize(input);
  printf("Tokenizing\n");
  print_tokens(doublePointer);

  free(doublePointer);
}

