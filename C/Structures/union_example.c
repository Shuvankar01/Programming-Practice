#include <stdio.h>


union Data {

    int num;
    float value;

};


int main(){

    union Data d;


    d.num=10;

    printf("Number: %d\n",d.num);


    d.value=5.5;


    printf("Value: %.2f",d.value);


    return 0;
}