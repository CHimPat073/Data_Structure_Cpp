#include<iostream>
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
Node* reverseList(Node* head) {
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;

        
    }
    return prev;
}
Node* reverseNodeRecursive(Node* curr, Node* prev){
    if(curr==NULL){
        return prev;
    Node* fwd=curr->next;
    curr->next=prev;
    prev=curr;
    curr=fwd;
    }
    return reverseNodeRecursive(curr,prev);
    ;

}

int main(){
    Node* head=new Node(10);
    Node* prev=NULL;
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    cout<<"Before Reversing the List: "<<endl;
    Print(head);

    head=reverseList(head);
    cout<<endl;
    cout<<"After Reversing the List: "<<endl;
    Print(head);

    // head=reverseNodeRecursive(head,prev);
    // cout<<endl;
    // cout<<"After Reversing the List: "<<endl;
    // Print(head);



    return 0;
}