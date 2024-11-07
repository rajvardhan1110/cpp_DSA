#include<stdio.h>

int main(){

    int arr[6] = {2,4,3,8,7,1};

    int n=6;

    for(int i=1; i<n; i++){

        int mini=arr[i];

        int j=i-1;
        for(; j>=0; j--){
            if(arr[j] > mini){

                arr[j+1]=arr[j];

            }else{

                break;
                
            }
        }

        arr[j+1]=mini;
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}