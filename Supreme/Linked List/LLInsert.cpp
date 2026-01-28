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
void InsertAtHead(Node* &head,int val){
    Node* newNode =new Node(val);
    newNode->next=head;
    head=newNode;
     
}
void InsertAtTail(Node* &tail,int val){
    Node * NewNode =new Node(val);
    tail->next=NewNode;
    tail=NewNode;

}


void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }


}
int main(){
    Node* n1=new Node(10);
    Node* n2=new Node(1);

    cout<<"Before Insertion at Head: "<<endl;
    print(n1);
    cout<<endl;
    InsertAtHead(n1,20);
    InsertAtHead(n1,30);
    InsertAtHead(n1,40);    
    cout<<"After Insertion at Head: "<<endl;
    print(n1);
    cout<<endl;

    cout<<"Before Insertion at tail: "<<endl;
    print(n2);
    cout<<endl;
    InsertAtTail(n2,2);
    InsertAtTail(n2,3);
    InsertAtTail(n2,4);    
    cout<<"After Insertion at tail  "<<endl;
    print(n2);
    cout<<endl;


    return 0;
}