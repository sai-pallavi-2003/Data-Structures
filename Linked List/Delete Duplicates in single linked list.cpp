/* completing the leetcode function.
description: Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
Input: head = [1,1,2]
Output: [1,2]
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
*/
class Solution {
public:
ListNode* deleteDuplicates(ListNode* head) {        
ListNode* temp = head;
while(temp!=NULL && temp->next!=NULL)
{
if(temp->val == temp->next->val){
ListNode* t1=temp->next;
temp->next=temp->next->next;
delete(t1);
}
else{
temp=temp->next;
}
}
return head;
}
};
