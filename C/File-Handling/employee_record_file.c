#include <stdio.h>


struct Employee{

    int id;
    float salary;

};


int main(){

    FILE *fp;

    struct Employee e;



    fp=fopen("employee.txt","w");



    printf("Enter ID: ");
    scanf("%d",&e.id);


    printf("Enter Salary: ");
    scanf("%f",&e.salary);



    fprintf(fp,
    "%d %.2f",
    e.id,
    e.salary);



    fclose(fp);


    printf("Employee saved");


    return 0;
}