#include <stdio.h>


struct Student {

    int roll;
    float marks;

};


int main(){

    struct Student s[3];

    int i;


    for(i=0;i<3;i++){

        printf("Enter roll and marks: ");

        scanf("%d %f",
        &s[i].roll,
        &s[i].marks);

    }


    printf("\nRecords\n");


    for(i=0;i<3;i++){

        printf("%d %.2f\n",
        s[i].roll,
        s[i].marks);

    }


    return 0;
}