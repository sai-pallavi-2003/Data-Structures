#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
  Node(){
      next=NULL;
  }
};
class List{
    public:
    Node *head;
    List(){
        head=NULL;
    }
    void reverse();
    void insert(int d);
    void display();
};
void List::reverse(){
    Node *curr,*prev,*next;
    curr=head;
    prev=NULL;
    next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
void List::insert(int d){
    Node *newN=new Node();
    newN->data=d;
    newN->next=head;
    head=newN;
}
void List::display(){
    Node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main(){
    List l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    cout<<"before reverse: "<<endl;
    l.display();
    cout<<endl;
    l.reverse();
    cout<<"after reverse: "<<endl;
    l.display();
}
