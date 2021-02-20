#include <stdio.h>
#include "tokenizer.h"

int f(){
}

int space_char(char c){
  if(c == ' ' || c == '\n' || c == '\t')
    return 1;
}
int non_space_char(char c){
  if(c != ' ' || c != '\n' || c != '\t')
    return 1;
}

