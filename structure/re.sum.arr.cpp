#include <iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[n-1];
    }

    return ((*arr) + sum(arr+1,n-1));
}

int main(){
    int arr[5]={2,5,1,4,3};

    cout<<sum(arr,5)<<endl;

    return 0;
}