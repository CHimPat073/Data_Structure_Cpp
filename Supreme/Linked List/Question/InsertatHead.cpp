#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node (int val){
        this->data=val;
        this->next=NULL;
    }
     
}; 
void InsertTail(Node *head, int x){
    Node* newNode =new Node(x);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void Print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(10);
    
    cout<<"Before Insertion at Head: "<<endl;
    Print(head);
    cout<<endl;
    
    InsertTail(head,50);
    cout<<"After Insertion at Tail: "<<endl;
    Print(head);
    cout<<endl;

    return 0;
}