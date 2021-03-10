#include <stdio.h>
#include <stdlib.h>
#include "history.h"

List *init_history(){
  List *head = (List*)malloc(sizeof(List));
  head -> root = (Item*)malloc(sizeof(Item));
  head -> root -> id = 0;
  head -> root -> next = NULL;
  return head;
}

void add_history(List *list, char *str){
  List *ptr;
  ptr = list;
  int i = 0;
  Item *temp = list -> root;
  temp -> str = str;
  temp -> id = i;
  temp -> next = NULL;

  while(ptr -> root -> next != NULL){
    ptr  = (List*)ptr -> root -> next;
  }
  ptr -> root -> next = temp;
  i++;
}

char *get_history(List *list, int id){
  Item *temp = list -> root;
  while(temp -> next != NULL){
    if(temp -> id == id)
      return temp -> str;
    else
      temp -> next;
  }
}

void print_history(List *list){
  
}

void free_history(List *list){
  
}

