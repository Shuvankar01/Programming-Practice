#include <stdio.h>


int binarySearch(int arr[],int low,int high,int key){


    if(low<=high){

        int mid=(low+high)/2;


        if(arr[mid]==key)
            return mid;


        else if(arr[mid]>key)

            return binarySearch(arr,low,mid-1,key);


        else

            return binarySearch(arr,mid+1,high,key);

    }


    return -1;
}



int main(){

    int arr[]={10,20,30,40,50};

    int result;


    result=binarySearch(arr,0,4,40);



    if(result!=-1)

        printf("Found at index %d",result);

    else

        printf("Not Found");


    return 0;
}