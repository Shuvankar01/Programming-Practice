#include <stdio.h>

#define SIZE 5


int queue[SIZE];

int front=-1;
int rear=-1;



void enqueue(int value){

if((rear+1)%SIZE==front)

printf("Full");


else{

if(front==-1)
front=0;


rear=(rear+1)%SIZE;

queue[rear]=value;

}

}



void display(){

int i=front;


while(i!=rear){

printf("%d ",queue[i]);

i=(i+1)%SIZE;

}


printf("%d",queue[rear]);

}



int main(){

enqueue(10);
enqueue(20);
enqueue(30);


display();


return 0;

}