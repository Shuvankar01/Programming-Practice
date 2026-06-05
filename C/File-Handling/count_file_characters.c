#include <stdio.h>


int main(){

    FILE *fp;

    char ch;

    int count=0;


    fp=fopen("data.txt","r");


    while((ch=fgetc(fp))!=EOF){

        count++;
    }


    fclose(fp);


    printf("Characters = %d",count);


    return 0;
}