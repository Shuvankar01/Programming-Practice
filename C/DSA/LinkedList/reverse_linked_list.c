#include <stdio.h>
#include <stdlib.h>


struct Node{

int data;
struct Node *next;

};



int main(){


struct Node *prev=NULL;
struct Node *current=NULL;
struct Node *next=NULL;


current=malloc(sizeof(struct Node));


current->data=10;


current->next=NULL;



while(current!=NULL){

next=current->next;

current->next=prev;

prev=current;

current=next;

}



printf("List Reversed");


return 0;

}