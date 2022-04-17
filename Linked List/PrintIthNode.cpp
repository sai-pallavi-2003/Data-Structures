/*For a given a singly linked list of integers and a position 'i', print the node data at the 'i-th' position.*/

void printIthNode(Node *head, int i)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        
        if(count==i){
           cout<<temp->data; 
        }
        count++;
        temp=temp->next;       
    }    
    //Write your code here
}
