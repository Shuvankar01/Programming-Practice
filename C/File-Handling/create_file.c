#include <stdio.h>

int main(){

    FILE *file;

    file = fopen("sample.txt","w");


    if(file == NULL){

        printf("File creation failed");

        return 1;
    }


    printf("File created successfully");


    fclose(file);


    return 0;
}