#include <stdio.h>
#include <stdlib.h>

void dfs(int n,int adj[][n],int *visited,int *index,int *ans,int node){
    ans[(*index)++]=node;
    visited[node]=1;

    for(int i=0; i<n; i++){
        if(adj[node][i]==1 && visited[i]==0){
            dfs(n,adj,visited,index,ans,i);
        }
    }


}


int main(){

//graph implementation

int n;
printf("enter number of nodes\n");
scanf("%d",&n);

int edge;
printf("enter number of edges\n");
scanf("%d",&edge);

int visited[n];
int adj[n][n];

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        adj[i][j]=0;
        
    }
}

for(int i=0; i<n; i++){
    visited[i]=0;
}

printf("enter pair of nodes in edges\n");
for(int i=0; i<edge; i++){
    printf("enter nodes in edge\n");
    int u; 
    int v;
    scanf("%d %d",&u,&v);
    adj[u][v]=1;
    adj[v][u]=1;
}

//dfs implementation

int index=0;
int ans[n];

printf("enter source node\n");
int source;
scanf("%d",&source);
dfs(n,adj,visited,&index,ans,source);

for(int i=0; i<n; i++){
    printf("%d ",ans[i]);
}printf("\n");


    return 0;
}