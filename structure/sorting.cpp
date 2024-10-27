#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // bubble sort
    // for(int j=1; j<n; j++){

    //     for(int k=0; k<n-j; k++){
    //         if(arr[k]>arr[k+1]){
    //             swap(arr[k],arr[k+1]);
    //         }
    //     }
    // }



    //insertion sort
    for(int j=1; j<n; j++){
        int temp;
        temp=arr[j];

        int k=j-1;
        for(; k>=0; k--){
            if(arr[k]>temp){
                arr[k+1]=arr[k];
            }else{
                break;
            }
        }
        arr[k+1]=temp;
    }


    for(int l=0; l<n; l++){
        cout<<arr[l]<<" ";
    }

}