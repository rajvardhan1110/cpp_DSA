#include<bits/stdc++.h>
using namespace std;

vector<int> cheak_left(const vector<int>& arr){
    queue<int> dum;
    vector<int> ans(arr.size());

    for(int i=0; i<arr.size(); i++){
        while(!dum.empty() && arr[dum.front()]<=arr[i]){
            dum.pop();
        }

        if(!dum.empty()){
            ans[i] = dum.front();
        }else{
            ans[i] = -1;
        }

        dum.push(i);
    }

    return ans;

}


vector<int> cheak_right(const vector<int>& arr){
    queue<int> dum;
    vector<int> ans(arr.size());

    for(int i=arr.size()-1; i>=0; i--){
        while(!dum.empty() && arr[dum.front()]<=arr[i]){
            dum.pop();
        }

        if(!dum.empty()){
            ans[i] = dum.front();
        }else{
            ans[i] = -1;
        }

        dum.push(i);
    }

    return ans;

}


int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> left(n);
    vector<int> right(n);

    left = cheak_left(arr);
    right = cheak_right(arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     for(int i=0; i<n; i++){
        cout<<left[i]<<" ";
    }
    cout<<endl;

     for(int i=0; i<n; i++){
        cout<<right[i]<<" ";
    }
    cout<<endl;
    
 
    return 0;
}