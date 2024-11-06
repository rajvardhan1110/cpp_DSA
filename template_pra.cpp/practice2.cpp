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

bool PowOfTwo(int n){
    return n>0 && (n & (n-1))==0;
}

void solve();

int main() {
    ios::sync_with_stdio(false);
    int t=1;
   
    while (t--) {
        solve();
    }
}

void solve() {
    // Implementation here
    int n;
    cin>>n;

    unordered_map<int,set<int>> adj;

    for(int i=0; i<n; i++){
        int u,v;
        cin>>u>>v;

        adj[u].insert(v);
        adj[v].insert(u);
    }

    vector<bool> visited(n+1,false);

    int ans=0;
    int level=0;

    queue<int> q;

    q.push(1);
    visited[1]=true;

    while(!q.empty()){
        int s=q.size();
        level++;

        if(PowOfTwo(level)){
            ans++;
        }

        for(int i=0; i<s; i++){
            int block=q.front();
            q.pop();

            for(auto it:adj[block]){
                if(visited[it]!=true){
                    visited[it]=true;
                    q.push(it);
                }
            }
        }
    }

    cout<<ans<<endl;

}