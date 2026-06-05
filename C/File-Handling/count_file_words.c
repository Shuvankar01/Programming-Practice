#include <stdio.h>


int main(){

    FILE *fp;

    char ch;

    int words=1;


    fp=fopen("data.txt","r");


    while((ch=fgetc(fp))!=EOF){

        if(ch==' ')
            words++;
    }


    fclose(fp);


    printf("Words = %d",words);


    return 0;
}