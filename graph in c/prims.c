#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

#define max_len 500

int adj[max_len][max_len];
bool mst[max_len];
int key[max_len];
int parent[max_len];

void prims(int n){
    for(int i=0; i<n; i++){
        mst[i]=false;
        key[i]=INT_MAX;
    }

    key[0]=0;
    parent[0]=-1;

    for(int count=0; count<n-1; count++){
        int minvalue=INT_MAX;
        int minindex=-1;
        for(int i=0; i<n; i++){
            if(!mst[i] && key[i] < minvalue){
                minvalue=key[i];
                minindex=i;
            }
        }
        mst[minindex]=true;

        for(int i=0; i<n; i++){
            if(adj[minindex][i] && !mst[i] && adj[minindex][i] < key[i]){
                parent[i]=minindex;
                key[i]=adj[minindex][i];
            }
        }

        printf("edge\t weight\n");
        for(int i=0; i<n; i++){
            printf("%d - %d \t%d\n",parent[i],i,adj[parent[i]][i]);
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



for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        adj[i][j]=0;
        
    }
}


printf("enter pair of nodes in edges and its weight\n");
for(int i=0; i<edge; i++){
    printf("enter nodes in edge\n");
    int u; 
    int v;
    int w;
    scanf("%d %d %d",&u,&v,&w);
    adj[u][v]=w;
    adj[v][u]=w;
}

//prims

prims(n);

    return 0;
}