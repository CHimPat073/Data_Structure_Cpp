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
int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void InsertAtPosition(int data,int position, Node* &head ,Node* &tail){
    if(position==0){
        InsertAtHead(head,tail,data);
        return;
    }
    int len=findLength(head);
    if(position>=len){
        InsertAtTail(head,tail,data);
        return;
    }

    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //Check Position
    int  i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr =prev->next;
    
    //Creating New node
    Node * newNode =new Node(data);
    newNode->next=curr;
    prev->next=newNode; 

}

void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }


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

    InsertAtPosition(25,1,head,tail);
    print(head); 
    cout<<endl;

    cout<<head->data<<" "<<tail->data<<endl;

    InsertAtPosition(15,5,head,tail);
    print(head); 
    cout<<endl;
    cout<<head->data<<" "<<tail->data<<endl;



    return 0;
}