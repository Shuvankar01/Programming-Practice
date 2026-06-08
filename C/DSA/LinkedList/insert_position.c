#include <stdio.h>
#include <stdlib.h>


struct Node{

int data;
struct Node *next;

};


int main(){

struct Node *head=NULL;
struct Node *n1;
struct Node *n2;
struct Node *newNode;


n1=malloc(sizeof(struct Node));
n2=malloc(sizeof(struct Node));


n1->data=10;
n1->next=n2;


n2->data=30;
n2->next=NULL;


head=n1;



newNode=malloc(sizeof(struct Node));

newNode->data=20;


newNode->next=head->next;


head->next=newNode;



struct Node *temp=head;


while(temp){

printf("%d ",temp->data);

temp=temp->next;

}


return 0;

}