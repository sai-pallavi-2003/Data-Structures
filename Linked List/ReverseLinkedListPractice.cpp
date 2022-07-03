#include<iostream>
using namespace std;
class Node{
    //Node is a self referential structure
  public:
  int data;
  Node *next;
};
class List{
    public:
    Node *head;
    List(){
        head=NULL;
    }
    void reverse();
    void display();
    void insert(int el);
};
void List::reverse(){
    Node *current,*next,*prev;
    //NULL->1->2->3, current=head=1, prev=next=NULL
    current=head;
    next=prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    //so by here the previous would have reached the end of the list 
}
void List::insert(int element){
    Node *newN=new Node();
    newN->data=element;
    newN->next=head;
    head=newN;
}
void List::display(){
    Node *temp;
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
    cout<<"before reversing the list is: ";
    l.display();
    cout<<"after reversing : ";
    l.reverse();
    l.display();
}
