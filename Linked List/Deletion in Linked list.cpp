/* Deletion in a linked list can be done in 3 ways: at the beginning, end, and at any position*/

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class SingleLinkedL{
    public:
    Node *head;
    SingleLinkedL(){
        head = NULL;
    }
    void insertAtPosition(int pos,int e);
    void deleteAtBegin();
    void deleteElement(int el);
    void deleteEnd();
    void display();
};
void SingleLinkedL::insertAtPosition(int pos,int e){
    Node *newNode = new Node;
    newNode->data=e;
     if(pos==1){
        newNode->next = head;
        head=newNode;
    }
    else{
        Node *temp;
        temp=head;
        int c=0;
        while(temp->next!=NULL && c<pos-1){
            temp=temp->next;
            c++;
        }
        newNode->next=temp->next;
         temp->next=newNode;
    }
}
void SingleLinkedL::deleteAtBegin(){
    Node *temp;
    temp=head;
    if(temp==NULL){
        cout<<"empty list";
    }
    else{
        head= head->next;
        delete(temp);
    }
}
void SingleLinkedL::deleteElement(int el){
    Node *temp;
    temp=head;
    if(temp==NULL){
        cout<<"empty list";
    }
    if(temp->data==el){
        head=head->next;
        delete(temp);
    }
    else{
        Node *t1;
        while(temp->next->next!=NULL){
            if(temp->next->data==el){
                t1=temp->next;
                temp->next=temp->next->next;
                delete(t1);
                break;
            }
            
        }
    }
}
void SingleLinkedL::deleteEnd(){
    Node *temp;
    temp=head;
    if(temp==NULL){
        cout<<"empty list";
    }
    else{
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
}
void SingleLinkedL::display(){
    Node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    SingleLinkedL sl1;
    sl1.insertAtPosition(1,10);
    sl1.insertAtPosition(2,20);
    sl1.insertAtPosition(3,30);
    sl1.insertAtPosition(4,40);
    sl1.insertAtPosition(5,50);
    sl1.insertAtPosition(6,60);
    sl1.deleteAtBegin();
    sl1.deleteEnd();
    sl1.deleteElement(20);
    sl1.display();
}
