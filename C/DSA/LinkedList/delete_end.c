#include <stdio.h>
#include <stdlib.h>


struct Node{

int data;
struct Node *next;

};



int main(){


struct Node *head;
struct Node *second;


head=malloc(sizeof(struct Node));
second=malloc(sizeof(struct Node));


head->data=10;
head->next=second;


second->data=20;
second->next=NULL;



struct Node *temp=head;



while(temp->next->next!=NULL){

temp=temp->next;

}



free(temp->next);


temp->next=NULL;



temp=head;


while(temp){

printf("%d ",temp->data);

temp=temp->next;

}


return 0;

}