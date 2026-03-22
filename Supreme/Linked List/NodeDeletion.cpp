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
void InsertAtHead(Node* &head,Node* &tail,int val){
    
    Node* newNode =new Node(val);
    newNode->next=head;
    if(head==NULL){
        tail=newNode;
    }
    head=newNode;
}
void InsertAtTail(Node* &head,Node* &tail ,int val){
    Node * NewNode =new Node(val);
    if(tail==NULL){
        head=NewNode;
        tail=NewNode;
    }
    else{
        tail->next=NewNode;
        tail=NewNode;
    }
}
void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void DeleteNode(int position, Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    if(position==0){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;

    }
    //delted End Node
    int len=findLength(head);
    if(position >= len){
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(position == len-1){
        int i=0;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        prev->next=NULL;
        Node* temp=tail;
        tail=prev;
        delete temp;
        return;
 
    }
    //Deleted Middle Node
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    return;
    
}
int main(){
    Node* newNode=new Node(10);
    Node* head=newNode;
    Node* tail=newNode;
    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,30);
    InsertAtHead(head,tail,40);

    print(head);
    cout<<endl;
    DeleteNode(2,head,tail);
    print(head);
    return 0;
}