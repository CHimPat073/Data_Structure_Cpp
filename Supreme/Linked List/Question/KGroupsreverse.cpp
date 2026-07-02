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
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* reverseList(Node* head,int k) {
    Node* prev=NULL;
    Node* curr=head;
    Node* fwd=curr->next;
    if(head==NULL || head->next==NULL){
        return head;
    }
    int len=length(head);
    if(len<k){
        return head;
    }
    int count=0;
    while(count<k){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
        count++;
        
    }
    if(fwd!=NULL){
        head->next=reverseList(fwd,k);
    }
    return prev;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);

    cout<<"Before Reversing the List: "<<endl;
    Print(head);

    head=reverseList(head,2);
    cout<<endl;
    cout<<"After Reversing the List: "<<endl;
    Print(head);


    return 0;
}