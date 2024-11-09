#include <stdio.h>
#include <stdlib.h>

int arr[1000];

void insert(int *arr,int *size, int value){
    (*size)++;
    arr[(*size)]=value;

    int index=(*size);

    while(index>1){
        int parent=index/2;

        if(arr[index] < arr[parent]){
            int temp=arr[index];
            arr[index]=arr[parent];
            arr[parent]=temp;
        }else{
            break;
        }

        index=parent;

    }
}

void deleteRoot(int *arr,int *size){
    if((*size)==0){
        printf("heap is empty\n");
        return;
    }

    arr[1]=arr[(*size)];
    (*size)--;

    int index=1;

    while(index <= (*size)){
        int left = 2*index;
        int right = (2*index)+1;
        int smallest=index;

        if(left <= (*size) && arr[smallest]>arr[left]){
            smallest = left;
        }

        if(right <= (*size) && arr[smallest]>arr[right]){
            smallest = right;
        }

        if(smallest != index){
            int temp = arr[smallest];
            arr[smallest]=arr[index];
            arr[index]=temp;

            index=smallest;
        }else{
            break;
        }

    }
}

void displayHeap(int *arr,int size){
    if(size==0){
        printf("heap is empty\n");
        return;
    }

    for(int i=1; i<=size; i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int n=0;

    int choice, value;
while (1) {
    printf("\nMenu:\n");
    printf("1. Insert\n");
    printf("2. Delete root\n");
    printf("3. Display heap\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insert(arr, &n, value);
            break;
        case 2:
            deleteRoot(arr, &n);
            break;
        case 3:
            displayHeap(arr, n);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
    }
}



    return 0;
}