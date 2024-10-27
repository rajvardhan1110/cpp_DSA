#include<bits/stdc++.h>
using namespace std;
class CreateGraph{
 public:
    vector<int> BFS(unordered_map<int,set<int>> &ListGraph,int data,unordered_map<int,bool> &verify){
        queue<int> qu;
        qu.push(data);
        verify[data]=true;
        vector<int> ans;

        while(!qu.empty()){
            int frontdata=qu.front();
            qu.pop();

            ans.push_back(frontdata);

            for(auto i: ListGraph[frontdata]){
                if(!verify[i]){
                    qu.push(i);
                    verify[i]=true;
                }
            }
        }

        return ans;
    }


};

int main(){
    unordered_map<int,set<int>> ListGraph;

    int n;
    int m;
    cout<<"Enter number of Nodes"<<endl;
    cin>>n;

    cout<<"Enter number of edges"<<endl;
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

    vector<int> ans=G.BFS(ListGraph,data,verify);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}