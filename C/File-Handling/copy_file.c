#include <stdio.h>


int main(){

    FILE *source,*target;

    char ch;


    source=fopen("data.txt","r");

    target=fopen("copy.txt","w");



    while((ch=fgetc(source))!=EOF){

        fputc(ch,target);

    }


    fclose(source);
    fclose(target);


    printf("File copied successfully");


    return 0;
}