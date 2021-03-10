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

  for(;(c = getchar()) != '\n' && i < LIMIT - 1; i++){
    input[i] = c;
    putchar(c);
  }
  input[i + 1] = '\0';
  printf("\n");

  add_history(history, input);
  add_history(history, "Jackie");
  char *c = get_history(history, 0);
  printf("%s\n", c);

  doublePointer = tokenize(input);
  printf("Tokenizing\n");
  print_tokens(doublePointer);
}

