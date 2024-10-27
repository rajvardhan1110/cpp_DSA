#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

Node* createList(Node* root){

    int data;
    cout<<"enter the data: ";
    cin>>data;
   

    //base case
    if(data==-1){
        return NULL;
    }

    root=new Node(data);

    cout<<"enter data left node of "<<root->data<<endl;
    root->left=createList(root->left);

    cout<<"enter data right of node"<<root->data<<endl;
    root->right=createList(root->right);

    return root;

}

void display(Node* root){
    queue<Node*> q;
    q.push(root);
   
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        

        if(temp==NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }

        }else{
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }

        }

    }
    

}

int main(){

    Node* root=NULL;

    createList(root);
    display(root);


    return 0;
}