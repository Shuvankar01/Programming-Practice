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


head->data=5;
head->next=second;


second->data=15;
second->next=NULL;



int key=15;


struct Node *temp=head;


while(temp!=NULL){

if(temp->data==key){

printf("Found");

return 0;

}

temp=temp->next;

}


printf("Not Found");


return 0;

}