#include <stdio.h>


int main(){

    FILE *fp;


    fp=fopen("test.txt","w");


    fprintf(fp,"C File Handling");


    fclose(fp);



    fp=fopen("test.txt","r");


    char data[50];


    fgets(data,50,fp);


    printf("%s",data);



    fclose(fp);


    return 0;
}