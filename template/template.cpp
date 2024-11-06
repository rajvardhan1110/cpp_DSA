#include <bits/stdc++.h>
using namespace std;

void inputV (vector <int> &v, int size) {
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
}

void printV(vector<int> &v, int size){
    for(int i=0; i<size; i++){
        cout<<v[i];
    }
}

void createsieve(vector<bool> &prime,int n){
    //declare prime vector in solve function with size n+1 and all values are true

    prime[0]=prime[1]=false;

    for(int i=2; i<n; i++){
        if(prime[i]){

            for(int j=2*i; j<n; j +=i){
                prime[j]=false;
            }
        }
    }
}

bool PowOfTwo(int n){
    return n>0 && (n & (n-1))==0;
}

void solve ();
int main () {

    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}

void solve () {
    
}