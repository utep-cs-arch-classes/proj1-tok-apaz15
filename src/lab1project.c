#include <stdio.h>

void main(){
  int c;
  printf("$");
  c = getchar();
  while(c != EOF){
    putchar(c);
    c = getchar();
  }
  
}
