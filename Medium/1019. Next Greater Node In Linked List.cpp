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
vector<int> getAns(vector<int>&arr){
    vector<int>newArray(arr.size());
    stack<int>st;
    st.push(0);
    for(int i=arr.size()-1; i>=0; i--){
        int curr=arr[i];
        while(st.top()!=0 && st.top()<=curr){
            st.pop();
        }
        newArray[i]=st.top();
        st.push(curr);
    }
    return newArray;
}
int getlength(ListNode* head){
    int cnt=0;
   ListNode* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
    vector<int> nextLargerNodes(ListNode* head) {
        int len =getlength(head);
        vector<int>arr(len);
        int i=0;
        while(head!=NULL){
            arr[i]=head->val;
            head=head->next;
            i++;
        }
        vector<int>ans(len);
        ans=getAns(arr);
        return ans;
    }
};
