#include <bits/stdc++.h>
using namespace std;
#define int long long int

void inputV (vector <int> &v, int size) {
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
}
void printV(vector<int> &v, int size){
    for(int i=0; i<size; i++){
        cout<<v[i] << " ";
        cout << "\n";
    }
}

void solve ();
int32_t main () {

    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}

void solve () {
    int n;
    cin >> n;

    vector <int> v (n);
    inputV(v,n);
    printV(v,n);


}