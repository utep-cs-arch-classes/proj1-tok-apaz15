#include <stdio.h>
#include "tokenizer.h"
#define LIMIT 100

int main(){
  char charArray[LIMIT];

  int i = 0;
  
  for(char inputChar; (inputChar = getchar()) != '\n' && LIMIT > i; i++){
    charArray[i] = inputChar;
    putchar(inputChar);
 }
  charArray[i] = '\0';
  printf("\n");
}

