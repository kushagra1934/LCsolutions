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
        ListNode* temp = head; 
        int n=0;
        while(temp != NULL){
            temp = temp -> next; 
            n++;
        }

        ListNode* prev= NULL;
        temp= head;
        int cnt=0;
        int middle=n/2;
        while(temp!=NULL){
            if(cnt==middle){
                prev->next=prev->next->next;
                cnt++;
            }
            else{
                prev=temp;
                temp=temp->next;
                cnt++;

                
            }
        }
        return head;

    }
    
};