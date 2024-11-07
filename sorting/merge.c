#include <stdio.h>
#include <stdlib.h>

void combine(int *arr,int s,int e){

    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = (int *)malloc(len1 * sizeof(int));
    int *second = (int *)malloc(len2 * sizeof(int));

    int original=s;

    for(int i=0; i<len1; i++){
        first[i]=arr[original++];
    }

    original=mid+1;

    for(int i=0; i<len2; i++){
        second[i]=arr[original++];
    }

    int index1=0;
    int index2=0;
    original=s;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[original++]=first[index1++];
        }else{
            arr[original++]=second[index2++];
        }
    }

    while(index1<len1){
        arr[original++]=first[index1++];
    }

    while(index2<len2){
        arr[original++]=second[index2++];
    }

    free(first);
    free(second);

}

void merge(int *arr,int s,int e){

    if(s>=e){
        return;
    }

    int mid=(s+e)/2;

    merge(arr,s,mid);
    merge(arr,mid+1,e);

    combine(arr,s,e);
}

int main(){

    int arr[6] = {2,4,3,8,7,1};
    int n=6;

    merge(arr,0,n-1);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}