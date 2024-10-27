//singly Linked List insertion,deletion

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* add;

       Node(int n){
        this-> data= n;
        this->add =NULL;
       }

       ~Node(){
         
       }
};

void print(Node* &head){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->add;
        }
        cout<<endl;
}

void front(Node* &tail,int n){
    Node* temp=new Node(n);
    temp->add=NULL;
    tail->add=temp;
    tail=temp;

}

void back(Node* &head,int n){
    Node* temp= new Node(n);
    temp->add=head;
    head=temp;
}

void between(Node* &head,Node* &tail,int position, int n){
    if(position==1){
        back(head,n);
        return;
    }

    Node* temp=head;

    int count=1;
    while(count < position-1){
        temp=temp->add;
        count=count+1;
    }

    if(temp->add==NULL){
        front(tail,n);
        return;
    }

    Node* num=new Node(n);
    num->add=temp->add;
    temp->add=num;

}

void remove(Node* &head,Node* &tail,int pos){
    if(head==NULL){
        return;
    }

    if(pos==1){
        Node* temp=head;
        head=temp->add;
          if(head==NULL){
            tail=NULL;
          }
        delete temp;
        return;
    }else{
        Node* curr=head;
        int count=1;
        Node* pre=NULL;

        while(count<pos){
            pre=curr;
            curr=curr->add;

            count=count+1;
        }

        if(curr->add==NULL){
            tail=pre;
            pre->add=NULL;
            delete curr;
        }else{
            pre->add=curr->add;
            curr->add=NULL;
            delete curr;
        }
    }
}

int main(){

    Node* head=new Node(5);
    Node *tail=head;

    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    back(head,10);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    front(tail,20);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    between(head,tail,3,50);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    between(head,tail,1,25);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    between(head,tail,6,30);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    remove(head,tail,2);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;
}