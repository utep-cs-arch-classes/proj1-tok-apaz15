#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int f(){
}

int space_char(char c){
  if(c == ' ' || c == '\n' || c == '\t')
    return 1;
  return 0;
}
int non_space_char(char c){
  return !space_char(c);
}
char *word_start(char *str){
  while(space_char(*str) && *str != '\0')
    str++;
  if(*str == '\0')
    return 0;

  return str;
}
char *word_end(char *str){
  while(non_space_char(*str)){
    str++;
  }
  if(*str == '\0')
    return 0;

  return --str;
}
int count_words(char *str){
  int counter = 1;
  for(; *str != '\0'; str++){
    if(space_char(*str))
      counter++;
  }
  return counter;
}
char *copy_str(char *src, short len){
  int i;
  char *pointer =  (char*)malloc(sizeof(char) * (len + 1));

  for(i = 0; i < len && *src != '\0'; i++){
    *(pointer + i) = *(src + i);
  }
  *(pointer + i) = '\0';

  return pointer;
}
void print_tokens(char **tokens){
  int i = 0;
  while(*(tokens + i) != 0){
    printf("%s\n", *(tokens + i));
    i++;
  }
}
