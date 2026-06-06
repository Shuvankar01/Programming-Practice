#include <stdio.h>


int power(int base,int exp){

    if(exp==0)
        return 1;


    return base * power(base,exp-1);

}


int main(){

    int a,b;


    printf("Enter base and power: ");
    scanf("%d %d",&a,&b);


    printf("Result = %d",power(a,b));


    return 0;
}