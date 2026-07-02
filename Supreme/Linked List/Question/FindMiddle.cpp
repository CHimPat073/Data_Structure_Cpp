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
int length(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void findMiddle(Node* head){
    int len =length(head);
    if(head==NULL){
        return;
    }
    if(len%2==0){
        int mid=len/2;
        Node* temp=head;
        for(int i=1;i<mid;i++){
            temp=temp->next;
        }
        cout<<"Middle Element is: "<<temp->data<<endl;
    }
    else{
        int mid=(len+1)/2;
        Node* temp=head;
        for(int i=1;i<mid;i++){
            temp=temp->next;
        }
        cout<<"Middle Element is: "<<temp->data<<endl;

    }
    
}
Node*  FindMiddle2(Node* head){
    if (head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    return slow;

}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30); 
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    // head->next->next->next->next->next=new Node(60);


    cout<<"Linked List: "<<endl;
    Print(head);
    cout<<endl;

    // findMiddle(head);
    // cout<<endl;

    head=FindMiddle2(head);
    cout<<"Middle Element is: "<<head->data<<endl;
    //Print(head);


    return 0;
}