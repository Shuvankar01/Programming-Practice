#include <stdio.h>
#include <stdlib.h>


struct Node{

    int data;
    struct Node *next;

};


void display(struct Node *head){

    while(head!=NULL){

        printf("%d ",head->data);

        head=head->next;
    }

}



int main(){

    struct Node *head=NULL;


    struct Node *newNode;


    newNode=(struct Node*)malloc(sizeof(struct Node));


    newNode->data=30;

    newNode->next=head;


    head=newNode;


    display(head);


    return 0;
}