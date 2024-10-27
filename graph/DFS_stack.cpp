#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:

    vector<int> DFS_stack(unordered_map<int,set<int>> &adjList,int data,unordered_map<int,bool> &verify){
        stack<int> st;
        vector<int> ans;

        st.push(data);
        verify[data]=true;

        while(!st.empty()){
            int frontData=st.top();
            st.pop();

            if(!verify[frontData]){
                ans.push_back(frontData);
                verify[frontData]=true;
            }

            for(auto i:adjList[frontData]){
                if(!verify[i]){
                    st.push(i);
                }
            }
        }

        return ans;
    }
     

};

int main(){

int n;
cout<<"Enter number of nodes: "<<endl;
cin>>n;

int m;
cout<<"Enter number of edges: "<<endl;
cin>>m;

unordered_map<int,set<int>> adjList;

for(int i=0; i<m; i++){
    int u,v;
    cout<<"Enter nodes in one pair: "<<endl;
    cin>>u>>v;

    adjList[u].insert(v);
    adjList[v].insert(u);
}

// int data=1;
unordered_map<int,bool> verify;
Graph G;

    vector<int> sol=G.DFS_stack(adjList,0,verify);

    for(int i=0; i<sol.size(); i++){
        cout<<sol[i]<<" ";
    }
    cout<<endl;

    return 0;
}