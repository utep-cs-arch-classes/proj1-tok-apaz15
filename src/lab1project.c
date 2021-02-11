#include <stdio.h>
#define LIMIT 100

int main(){
  char charArray[LIMIT];
  
  int i = 0;
  
  for(char inputChar; (inputChar = getchar()) != '\n' && i < LIMIT; i++){
    charArray[i] = inputChar;
    putchar(inputChar);
  }
  printf("\n");
  
}
