#include <stdio.h>
#include "tokenizer.h"
#define LIMIT 100

int main(){
  char charArray[LIMIT];

  int i = 0;
  
  for(char inputChar; (inputChar = getchar()) != '\n' && i < LIMIT - 1; i++){
    charArray[i] = inputChar;
    putchar(inputChar);
 }
  charArray[i] = '\0';
  printf("\n");
  char *pointer = word_start(charArray);
  printf("%c\n", *pointer);
  char *endPoint = word_end(charArray);
  printf("%c\n", *endPoint);
  int counter = count_words(charArray);
  printf("%d\n", counter);
}

