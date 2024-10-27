#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
 
};

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* insert(Node* &root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(val < root->data){
       root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }

    return root;


}

void input(Node* &root){
    cout<<"enter data"<<endl;
    int val;
    cin>>val;

    while(val!=-1){
        root=insert(root,val);
        cin>>val;
    }

}


int main(){
    Node* root=NULL;

    input(root);

    inorder(root);

    return 0;
}