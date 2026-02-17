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
void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }


    } 
int main(){
    Node* n1=new Node(10);
    Node* n2=new Node(20);
    Node* n3=new Node(30);
    Node* n4=new Node(40);
    Node* n5=new Node(50);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL; 

    cout<<"Printing Linked List: "<<endl;;
    print(n1);

    return 0;
}