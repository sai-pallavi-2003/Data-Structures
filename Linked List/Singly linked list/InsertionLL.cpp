/* Singly Linked List is a linear data structure in which data is stored dynamically.
Data is stored in the form of nodes, which contains the data part and the link part
Insertion can be done in 3 ways: at the beginning, at a given position, at the end.*/


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class SingleLL{
    public:
    Node *head;
    SingleLL(){
        head=NULL;
    }
    void insertbegin(int el);
    void insertposition(int pos, int ele);
    void insertend(int elem);
    void display();
};
void SingleLL::insertbegin(int el){
    Node *newNode = new Node;
    newNode->data = el;
    if(head==NULL){
        newNode->next=NULL;
        head = newNode;
    }
    else{
        newNode->next = head;
        head=newNode;
    }
}
void SingleLL::insertend(int elem){
    Node *newNode = new Node;
    newNode->data=elem;
    if(head==NULL){
        newNode->next=NULL;
        head = newNode;
    }
    else{
        Node *temp;
        temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }
}
void SingleLL::insertposition(int pos,int ele){
    Node *newNode = new Node;
    newNode->data = ele;
    if(pos==1){
        insertbegin(ele);
    }
    else{
        Node *temp;
        temp = head;
        int pos1=0;
        while(temp->next!=NULL && pos1<pos-1){
            temp=temp->next;
            pos1++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void SingleLL::display(){
    Node *temp;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    SingleLL s1;
    s1.insertbegin(10);
    s1.insertbegin(20);
    s1.insertbegin(30);
    s1.insertposition(2,40);
    s1.insertposition(3,50);
    s1.insertend(60);
    s1.insertbegin(70);
    s1.display();
}
