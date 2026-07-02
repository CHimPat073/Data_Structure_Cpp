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
void Print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* RemoveDuplicate(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* temp=head;
    while(temp!=NULL){
        if((temp->next!=NULL) && (temp->data==temp->next->data)){
            Node* todelete=temp->next;
            temp->next=temp->next->next;

            //delte the node
            todelete->next=NULL;  //Good Practice to make the next of node to be deleted as NULL before deleting it  
            delete todelete;
        }
        else{
            temp=temp->next;
        }
    }
}
int main(){
    Node* head=new Node(10);
Node* second=new Node(20);
Node* third=new Node(20);
Node* fourth=new Node(30); 
Node* fifth=new Node(40);
Node* sixth=new Node(40);

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;

    cout<<"Before Removing Duplicates: "<<endl;
    Print(head);

    cout<<endl<<"After Removing Duplicates: "<<endl;
    RemoveDuplicate(head);
    Print(head);


    return 0;
}