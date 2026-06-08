#include <stdio.h>
#include <stdlib.h>


struct Node{

    int data;
    struct Node *next;

};



int main(){

    struct Node *head=NULL;
    struct Node *temp;


    struct Node *newNode;


    newNode=malloc(sizeof(struct Node));


    newNode->data=50;
    newNode->next=NULL;



    head=newNode;



    temp=head;


    while(temp->next!=NULL){

        temp=temp->next;

    }


    struct Node *second;

    second=malloc(sizeof(struct Node));


    second->data=100;
    second->next=NULL;


    temp->next=second;



    temp=head;


    while(temp!=NULL){

        printf("%d ",temp->data);

        temp=temp->next;
    }


    return 0;
}