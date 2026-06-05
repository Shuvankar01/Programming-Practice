#include <stdio.h>


struct Student{

    int roll;
    char name[30];
};


int main(){

    FILE *fp;

    struct Student s;



    fp=fopen("student.txt","w");



    printf("Enter roll: ");
    scanf("%d",&s.roll);


    printf("Enter name: ");
    scanf("%s",s.name);



    fprintf(fp,
    "%d %s",
    s.roll,
    s.name);



    fclose(fp);



    printf("Record saved");


    return 0;
}