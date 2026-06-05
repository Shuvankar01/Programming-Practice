#include <stdio.h>


int main(){

    FILE *fp;


    fp=fopen("data.txt","a");


    fprintf(fp,
    "\nLearning File Handling");


    fclose(fp);


    printf("Data appended");


    return 0;
}