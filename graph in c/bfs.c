#include <stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int l;
    int r;
    int* arr;
};

int isEmpty(struct queue *q){
    if(q->r==q->l){
        return 1;
    }

    return 0;

}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }

    return 0;
}


void push(struct queue *q,int value){

     if(isFull(q)){
      printf("queue is full\n");
     }else{
        q->r++;
        q->arr[q->r]=value;
     }
    
}

int  pop(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("queue is empty\n");
    }else{

        q->l++;
        a=q->arr[q->l];
        
    }

    return a;
}

int main(){

struct queue q;

q.size=400;
q.l=0;
q.r=0;
q.arr=(int*)malloc(q.size * (sizeof(int)));

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

//bfs implement

int index=0;

printf("enter source node\n");
int source;
scanf("%d",&source);

int ans[n];

int node;


visited[source]=1;
push(&q,source);

while(!isEmpty(&q)){
    int node=pop(&q);

    ans[index++]=node;

    for(int i=0; i<n; i++){
        if(adj[node][i]==1 && visited[i]==0){
            visited[i]=1;
            push(&q,i);
        }
    }

}

for(int i=0; i<n; i++){
    printf("%d ",ans[i]);
}printf("\n");


    return 0;
}