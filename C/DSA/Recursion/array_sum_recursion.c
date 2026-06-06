#include <stdio.h>


int arraySum(int arr[],int n){

    if(n==0)
        return 0;


    return arr[n-1]+arraySum(arr,n-1);

}



int main(){

    int arr[]={1,2,3,4,5};


    printf("Sum = %d",
    arraySum(arr,5));


    return 0;
}