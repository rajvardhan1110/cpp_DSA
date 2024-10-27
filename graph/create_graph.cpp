#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adj;

    void create(int u,int v,int di){
        adj[u].push_back(v);

        if(di==0){
            adj[v].push_back(u);
        }
    }

    void display(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }


};

int main(){

    Graph g;

    int n;
    int m;

    cout<<"Enter number of Nodes"<<endl;
    cin>>n;

    cout<<"Enter number of edges"<<endl;
    cin>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        g.create(u,v,0);
    }

    g.display();

    
    return 0;
}