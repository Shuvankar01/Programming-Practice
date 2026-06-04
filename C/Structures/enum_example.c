#include <stdio.h>


enum Day {

    MON,
    TUE,
    WED,
    THU,
    FRI

};


int main(){

    enum Day today;


    today=WED;


    printf("Day number: %d",today);


    return 0;
}