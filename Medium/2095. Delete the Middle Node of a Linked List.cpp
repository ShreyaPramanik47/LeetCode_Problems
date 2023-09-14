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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
        return NULL;
    }
    int cnt=0;
    ListNode* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    int mid=cnt/2;
    int cntt=0;
    ListNode* temp2=head;
    while(cntt!=(mid-1)){
        temp2=temp2->next;
        cntt++;
        // if(cntt==mid){
        //     break;
        // }
    }
    ListNode* deleteNode = temp2->next;
    temp2->next=temp2->next->next;
    delete(deleteNode);
    return head;
    }
};
