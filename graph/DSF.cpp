#include<bits/stdc++.h>
using namespace std;

class CreateGraph{
public:
    void DFS(unordered_map<int,set<int>> &ListGraph,int data,unordered_map<int,bool> &verify,vector<int> &ans){
        ans.push_back(data);
        verify[data]=true;

        for(auto i:ListGraph[data]){
            if(!verify[i]){
                DFS(ListGraph,i,verify,ans);
            }
        }
    }

};

int main(){
     unordered_map<int,set<int>> ListGraph;

    int n;
    int m;
    cout<<"Enter number of Nodes"<<endl;
    cin>>n;

    // cout<<"Enter number of edges"<<endl;
    cin>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        ListGraph[u].insert(v);
        ListGraph[v].insert(u);
    }
    int data=1;
    
    unordered_map<int,bool> verify;
    CreateGraph G;

    vector<int> ans;

    G.DFS(ListGraph,0,verify,ans);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}