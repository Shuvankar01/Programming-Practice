#include <stdio.h>
#include <stdlib.h>


struct Node{

int data;
struct Node *next;

};



int main(){

struct Node *head;


head=malloc(sizeof(struct Node));


head->data=10;


head->next=NULL;



struct Node *temp=head;


head=head->next;


free(temp);



if(head==NULL)

printf("List Empty");

else

printf("%d",head->data);



return 0;

}