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

void createsieve(vector<bool> &prime, int n){
    // Declare prime vector in solve function with size n+1 and all values are true
    prime[0] = prime[1] = false;
    for(int i=2; i<n; i++){
        if(prime[i]){
            for(int j=2*i; j<n; j+=i){
                prime[j] = false;
            }
        }
    }
}

void solve();

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

void solve() {
    // Implementation here
    int n;
    int k;
    char p;
    cin>>n;
    cin>>k;
    cin>>p;

    vector<int> num(k);
    inputV(num,k);

    sort(num.begin(),num.end());

    vector<int> fruit(n);
    inputV(fruit,n);
   

    
    bool vishal=(p=='V');
    

    int i=k-1;
    bool se;


    while(true){
        se=false;
        for(int z=0; z<n; z++){
            if(fruit[z]>=num[i]){
                fruit[z] -= num[i];
                vishal =!vishal;

                se=true;
                break;
            }
        }

        if(!se){
            i--;
        }
        

        if(i<0){
            if(vishal){
                cout<<'K'<<endl;
                break;
            }else{
                cout<<'V'<<endl;
                break;
            }
        }


    }



}