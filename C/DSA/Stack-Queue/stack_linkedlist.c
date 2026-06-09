#include <stdio.h>
#include <stdlib.h>


struct Node{

int data;
struct Node *next;

};


struct Node *top=NULL;



void push(int value){

struct Node *newNode;

newNode=malloc(sizeof(struct Node));


newNode->data=value;

newNode->next=top;


top=newNode;

}



void pop(){

if(top==NULL)

printf("Empty Stack");


else{

struct Node *temp=top;


printf("Removed: %d",top->data);


top=top->next;


free(temp);

}

}



int main(){

push(5);
push(10);
push(15);


pop();


return 0;

}