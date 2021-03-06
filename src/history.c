#include <stdio.h>
#include <stdlib.h>
#include "history.h"

List *init_history(){
  List *head = (List*)malloc(sizeof(List));
  head -> root = (Item*)malloc(sizeof(Item));
  return head;
}

void add_history(List *list, char *str){
  int i = 0;
  List *ptr = list;
  Item *temp = list -> root;

  temp -> str = str;
  temp -> id = i;
  temp -> next = NULL;

  while(ptr -> root -> next != NULL){
    ptr = (List*)ptr -> root -> next;
    i++;
  }
  ptr -> root -> next = temp;
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
  Item *temp = list -> root;
  while(temp -> next != NULL){
    printf("%s\n", temp -> str);
    temp = temp -> next;
  }
}

void free_history(List *list){
  free(list);
}

