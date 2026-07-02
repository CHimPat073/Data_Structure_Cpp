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
Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* AddTwonum(Node* &head1, Node* &head2){
    //Reverse both the linked lists
     head1=reverseList(head1);
     head2=reverseList(head2);

     //add the two Numbers
     Node* anshead=NULL;
    Node* anstail=NULL;
    int carry=0;

    while(head1!=NULL && head2!=NULL){
        int sum = carry+head1->data + head2->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        if(anshead==NULL){
            anshead=newNode;
            anstail=newNode;
        }
        else{
            anstail->next=newNode;
            anstail=anstail->next;
        }
        head1=head1->next;
        head2=head2->next;

        
    }
    //head1 len > head2 len
    while(head1!=NULL){
        int sum = carry+head1->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        anstail->next=newNode;
        anstail=newNode;
        head1=head1->next;
    }
    //head2 len > head1 len
    while(head2!=NULL){
        int sum = carry+head2->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        anstail->next=newNode;
        anstail=newNode;
        head2=head2->next;
    }
   while(carry!=0){
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        
        anstail->next=newNode;
        anstail=newNode;
        
   }
   anshead=reverseList(anshead);
   return anshead;

}
int main(){
    Node* head1 = new Node(9);
    head1->next = new Node(9);
    head1->next->next = new Node(3);    

    Node* head2 = new Node(9);
    head2->next = new Node(9);
    // head2->next->next = new Node(4);


    Node* head=AddTwonum(head1, head2);
    cout<<"After Adding the two numbers: "<<endl;
    Print(head);
    

    return 0;
}