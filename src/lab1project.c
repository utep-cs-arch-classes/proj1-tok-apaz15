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
  printf("\n");  
}

int space_char(char c){
  if(c == ' ' || c == '\n' || c == '\t')
    return 1;
}
int non_space_char(char c){
  if(c != ' ' || c != '\n' || c != '\t')
    return 1;
}
