#include <stdio.h>
#include <stdlib.h>


struct Node{

int data;
struct Node *next;

};


struct Node *front=NULL;
struct Node *rear=NULL;



void enqueue(int value){


struct Node *newNode=malloc(sizeof(struct Node));


newNode->data=value;
newNode->next=NULL;



if(rear==NULL){

front=rear=newNode;

}

else{

rear->next=newNode;

rear=newNode;

}

}



void display(){

while(front){

printf("%d ",front->data);

front=front->next;

}

}



int main(){

enqueue(1);
enqueue(2);
enqueue(3);


display();


return 0;

}