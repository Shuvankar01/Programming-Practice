#include <stdio.h>

#define SIZE 5


int queue[SIZE];

int front=-1;
int rear=-1;



void enqueue(int value){

if(rear==SIZE-1)

printf("Queue Full");


else{

if(front==-1)
front=0;


queue[++rear]=value;

}

}



void dequeue(){

if(front==-1 || front>rear)

printf("Queue Empty");


else{

printf("Removed: %d",queue[front]);

front++;

}

}



int main(){

enqueue(10);
enqueue(20);
enqueue(30);


dequeue();


return 0;

}