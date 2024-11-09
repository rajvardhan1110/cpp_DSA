#include <stdio.h>

int partition(int *arr,int s,int e){
    int pivot=arr[s];

    int cnt=0;

    for(int i=s+1; i<=e; i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    int pindex=s+cnt;

    int a=arr[pindex];
    arr[pindex]=arr[s];
    arr[s]=a;


    int i=s;
    int j=e;

    while(i<pindex && j>pindex){
        while(arr[i]<arr[pindex]){
            i++;
        }

        while(arr[j]>arr[pindex]){
            j--;
        }

        if(i<pindex && j>pindex){
            int a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
    }

    return pindex;
}

void quick(int *arr,int s,int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);

    quick(arr,s,p-1);
    quick(arr,p+1,e);

}

int main(){

    int arr[6]= {2,4,3,8,7,1};

    int n=6;

    quick(arr,0,n-1);


    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}