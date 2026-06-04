#include <stdio.h>


struct Student {

    int roll;
    float marks;

};


int main(){

    struct Student s={10,95};


    struct Student *ptr;


    ptr=&s;


    printf("Roll: %d\n",
    ptr->roll);


    printf("Marks: %.2f",
    ptr->marks);


    return 0;
}