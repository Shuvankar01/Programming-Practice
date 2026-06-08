#include <stdio.h>
#include <stdlib.h>


struct Node{

int data;

struct Node *prev;
struct Node *next;

};



int main(){


struct Node *node;


node=malloc(sizeof(struct Node));


node->data=100;

node->prev=NULL;

node->next=NULL;



printf("Data = %d",node->data);


return 0;

}