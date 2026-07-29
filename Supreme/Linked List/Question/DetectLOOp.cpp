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
bool CheckLoops(Node* &head){
    if(head==NULL){
        return false;
     }
     if(head->next==NULL){
        return false;
     }
     Node*slow=head;
     Node*fast=head;

     while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        

        if(slow==fast){
            return true;
        }  
     }
    return false;

     
}
int StartOfLoop(Node* head){
    if(head==NULL){
        return -1;
     }
     if(head->next==NULL){
        return -1;
     }
     Node*slow=head;
     Node*fast=head;

     while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        

        if(slow==fast){
            slow=head;
            break; 
        }  
     }
     while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
     }
     return slow->data;
      
}
Node* RemoveLoop(Node* head){
    if(head==NULL){
        return head;
     }
     if(head->next==NULL){
        return head;
     }
     Node*slow=head;
     Node*fast=head;

     while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        

        if(slow==fast){
            slow=head;
            break; 
        }  
     }
     Node* prev=fast;
     while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;
     }
     prev->next=NULL;
     return head;
      
}

 

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=head->next->next;
    
    if(CheckLoops(head)){
        cout<<"Loop is present in the linked list"<<endl;
    }
    else{
        cout<<"Loop is not present in the linked list"<<endl;
    }

    cout<<"Starting point of the loop is: "<<StartOfLoop(head)<<endl;

    head=RemoveLoop(head);

        if(CheckLoops(head)){
            cout<<"Loop is present in the linked list"<<endl;
        }
        else{
            cout<<"Loop is not present in the linked list"<<endl;
        
    }
    Print(head);
    return 0;
} 