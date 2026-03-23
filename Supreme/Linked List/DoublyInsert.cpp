#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }

    Node (int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void Print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
int getLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void InsertAtHead(Node* &head,Node* &tail,int val){
    Node* newNode =new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void InsertAtTail(Node* &head,Node* &tail ,int val){
    Node * NewNode =new Node(val);
    if(tail==NULL){
        head=NewNode;
        tail=NewNode;
        return;
    }
    tail->next=NewNode;
    NewNode->prev=tail;
    tail=NewNode;
}
void InsertAtPosition(Node* &head,Node* &tail, int Position,int val){
   if(Position==0){
    InsertAtHead(head,tail,val);
    return;
   }   
   int len=getLength(head);  
   if(Position>=len){
    InsertAtTail(head,tail,val);
    return;
   }
   Node* prevNode =head;
   int count=1;
    while(count<Position){
     prevNode=prevNode->next;
     count++;
    }
    Node* curr=prevNode->next;
    Node* newNode =new Node(val);
    prevNode->next=newNode;
    newNode->prev=prevNode;

    newNode->next=curr;
    curr->prev=newNode;
    return;

}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    InsertAtHead(head,tail,10);
    Print(tail);
    cout<<endl;
    InsertAtHead(head,tail,20);
    Print(head);

    cout<<endl;
    InsertAtTail(head,tail,30);
    Print(head);
    cout<<endl;
    InsertAtTail(head,tail,40);
    Print(tail);
    cout<< endl;
    Print(head);
    cout<<endl;

    InsertAtPosition(head,tail,2,25);
    Print(head);
    
    
    return 0;
}