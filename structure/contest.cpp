#include <iostream>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;

        int c1=0;
        int count=0;

        for(int i=l; i<=r; i++){
            count=0;
            for(int j=2; j<l; j++){
                if(i%j==0){
                    count=count+1;
                    cout<<i<<" "<<j<<" ";
                   }

                   cout<<endl;
            }
            if(count==1){
                c1=c1+1;
              
            }
        }

        int ans=(r-l)+1-c1;

        cout<<ans<<endl;

        return 0;
}


void reverse(int *arr, int size) {
    int s = 0;
    int e = size - 1;
    while (s< e) {
       
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        
        s++;
        e--;
    }
}