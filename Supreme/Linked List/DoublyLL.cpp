#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
}; 
void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int Getlength(Node* &head){
    int len =0;
    Node* temp = head;
    while(temp != NULL){
        temp=temp->next;
        len++;
    }
    return len;

}
int main(){
    Node* First = new Node(10) ;
    Node* Second = new Node(20) ;
    Node* Third = new Node(30) ;

    First-> next=Second;
    Second->prev=First;

    Second->next=Third;
    Third->prev=Second;

    Print(First);




    return 0;
}