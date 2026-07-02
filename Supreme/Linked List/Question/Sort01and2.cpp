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
//Approach 1: Count the number of 0s, 1s and 2s and then update the linked list accordingly

Node* SortLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    int count0=0;
    int count1=0;  
    int count2=0;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            count0++;
        }
        else if(temp->data==1){
            count1++;
        }
        else if(temp->data==2){
            count2++;
        } 
        temp=temp->next;
    }
    temp=head;
    //fill 0s
    while(count0--){
        temp->data=0;
        temp=temp->next;
    }
    //fill 1s
    while(count1--){
        temp->data=1;
        temp=temp->next;
    }
    //fill 2s
    while(count2--){
        temp->data=2;
        temp=temp->next;
    }
}

Node* SortLL2(Node* head){
    if(head==NULL || head->next== NULL){
        return head;
    }
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;

    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;

    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){ 
            // Node* curr=temp;
            // temp=temp->next;
            // curr->next=NULL;

            zeroTail->next=temp;
            zeroTail=zeroTail->next;
        }
        else if(temp->data==1){
            // Node* curr=temp;
            // temp=temp->next;
            // curr->next=NULL;

            oneTail->next=temp;
            oneTail=oneTail->next;
        }
        else if(temp->data==2){
            // Node* curr=temp;
            // temp=temp->next;
            // curr->next=NULL;

            twoTail->next=temp;
            twoTail=twoTail->next;
        }
        temp=temp->next;
    }
    //Merge the three sublists
    Node* temp2 =oneHead;
    oneHead=oneHead->next;
    temp2->next=NULL;
    delete temp2;

    temp2=twoHead;
    twoHead=twoHead->next;
    temp2->next=NULL;
    delete temp2; 

    if(oneHead!=NULL){
        zeroTail->next=oneHead;
        if(twoHead!=NULL){
            oneTail->next=twoHead;
        }
    }
    else{
        if(twoHead!=NULL){
            zeroTail->next=twoHead;
        }
    }
    twoTail->next =NULL;

    temp2=zeroHead;
    zeroHead=zeroHead->next;
    temp2->next=NULL;
    delete temp2;

    return zeroHead;

}
int main(){
    Node* head = new Node(2);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(2);
    Node* fifth = new Node(2);
    Node* sixth = new Node(2);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    Print(head);

    cout<<endl;

    head=SortLL2(head);

    Print(head);
    cout<<endl;

    return 0;
}