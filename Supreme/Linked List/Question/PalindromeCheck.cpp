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
int length(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
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
bool checkPalindrome(Node* head){
    if (head==NULL){
        return true;
    }   
    if(head->next==NULL){
        return true;
    }
    Node* slow =head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    //Slow = middle 

    //Reverse the second half of the linked list
    Node* reverseHead=reverseList(slow->next);
    //Compare the first half and the reversed second half

    Node* temp1=head;
    Node* temp2=reverseHead;

    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}  
int main(){
Node* head=new Node(10);
Node* second=new Node(20);
Node* third=new Node(30);
Node* fourth=new Node(310); 
Node* fifth=new Node(20);
Node* sixth=new Node(10);

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;

bool isPalindrome= checkPalindrome(head);

if(isPalindrome){
    cout<<"The linked list is a palindrome."<<endl;
}else{
    cout<<"The linked list is not a palindrome."<<endl;
}
    return 0;
}