#include<stdio.h>

int main(){

    int arr[6]= {2,4,3,8,7,1};

    int n=6;

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}