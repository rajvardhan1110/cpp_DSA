#include <stdio.h>

void shell(int *arr,int n){

    for(int gap=n/2; gap>0; gap /=2){

        for(int i=gap; i<n; i++){
            int temp=arr[i];
            int j;

            for(j=i; j>=gap && arr[j-gap]>temp; j -= gap){
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
        }
    }
}

int main(){

    int arr[6] = {2,4,3,8,7,1};

    int n=6;

    shell(arr,n);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}