#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertATfirst(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtlast(Node* &head,int d){
    
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    
    InsertATfirst(head,12);
    InsertATfirst(head,15);
    print(head);
}