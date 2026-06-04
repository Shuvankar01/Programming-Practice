#include <stdio.h>


typedef struct {

    int id;
    char name[20];

} Student;



int main(){

    Student s={1,"Alex"};


    printf("%d\n",s.id);

    printf("%s",s.name);


    return 0;
}