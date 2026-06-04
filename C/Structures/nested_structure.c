#include <stdio.h>
#include <string.h>

struct Address {

    char city[30];
    int pin;

};


struct Student {

    int roll;
    char name[30];

    struct Address address;

};


int main(){

    struct Student s;


    s.roll = 5;

    strcpy(s.name,"John");

    strcpy(s.address.city,"Bhubaneswar");

    s.address.pin = 751001;



    printf("Roll: %d\n",s.roll);
    printf("Name: %s\n",s.name);

    printf("City: %s\n",s.address.city);

    printf("PIN: %d",s.address.pin);


    return 0;
}