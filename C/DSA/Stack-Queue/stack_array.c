#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top=-1;


void push(int value){

    if(top==SIZE-1)
        printf("Stack Overflow\n");

    else{

        top++;
        stack[top]=value;

    }

}


void pop(){

    if(top==-1)
        printf("Stack Underflow\n");

    else{

        printf("Removed: %d\n",stack[top]);
        top--;

    }

}


void display(){

    int i;

    for(i=top;i>=0;i--){

        printf("%d ",stack[i]);

    }

}


int main(){

    push(10);
    push(20);
    push(30);


    display();


    printf("\n");

    pop();


    display();


    return 0;
}