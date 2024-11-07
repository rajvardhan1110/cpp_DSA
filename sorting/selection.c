#include<stdio.h>

int main(){

   int arr[6] = {2,4,3,8,7,1};

    int n=6;
   //selection sort
    for(int i=0; i<n-1; i++){
        int mini=i;

        for(int j=i+1; j<n; j++){
            if(arr[mini] > arr[j]){
                mini=j;
            }
        }

        int a=arr[i];
        arr[i]=arr[mini];
        arr[mini]=a;

    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
