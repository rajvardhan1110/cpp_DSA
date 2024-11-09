#include <stdio.h>

void reheapup(int *arr, int size, int i){

    int target=i;
    int left= 2*i;
    int right= (2*i)+1;

    if(left <=size && arr[target] < arr[left]){
        target=left;
    }

    if(right <=size && arr[target] < arr[right]){
        target=right;
    }

    if(target!=i){
        int temp=arr[target];
        arr[target]=arr[i];
        arr[i]=temp;

        reheapup(arr,size,target);
    }
}

void heapsort(int *arr,int size){
   while(size > 1){
    int temp=arr[size];
    arr[size]=arr[1];
    arr[1]=temp;

    size--;

    reheapup(arr,size,1);
    
   }
}


int main(){

    int arr[6]={-1,52,36,41,20,15};

    int size=5;

    for(int i= size/2; i>0; i--){
        reheapup(arr,size,i);
    }

    for(int i=1; i<=size; i++){
        printf("%d ",arr[i]);
    }printf("\n");


    heapsort(arr,size);

    for(int i=1; i<=size; i++){
        printf("%d ",arr[i]);
    }printf("\n");


    return 0;
}