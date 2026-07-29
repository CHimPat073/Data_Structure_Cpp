#include<bits/stdc++.h>
using namespace std;
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
void InsertAtHead(Node* &n1,Node* &n2,int val){
    if(n1==NULL){
        Node* newNode =new Node(val);
        n1=newNode;
        n2=newNode;
        return;
    }
    
    Node* newNode =new Node(val);
    newNode->next=n1;
    n1=newNode;
}
void InsertAtTail(Node* &n1,Node* &n2 ,int val){
     if(n2==NULL){
        Node* newNode =new Node(val);
        n1=newNode;
        n2=newNode;
        return;
    }

    Node * NewNode =new Node(val);
    n2->next=NewNode;
    n2=NewNode;

}


void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }


}
int main(){
    //Node* n1=new Node(1);
    Node* n1=NULL;
    Node* n2=NULL;

    cout<<"Before Insertion at Head: "<<endl;
    print(n1);
    cout<<endl;
    InsertAtHead(n1,n2,20);
    InsertAtHead(n1,n2,30);
    InsertAtHead(n1,n2,40);    
    cout<<"After Insertion at Head: "<<endl;
    print(n1);
    cout<<endl;

    cout<<"Before Insertion at tail: "<<endl;
    print(n1);
    cout<<endl;
    InsertAtTail(n1,n2,2);
    InsertAtTail(n1,n2,3);
    InsertAtTail(n1,n2,4);    
    cout<<"After Insertion at tail  "<<endl;
    print(n1);
    cout<<endl;


    return 0;
}