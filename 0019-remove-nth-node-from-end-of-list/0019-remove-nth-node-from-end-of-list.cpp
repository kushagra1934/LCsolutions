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
    int lengthofLL(ListNode* head){
        int cnt=0;
        ListNode* temp = head; 
        while( temp != nullptr){
            temp= temp -> next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int k = lengthofLL(head) - n + 1;
    if (head == nullptr) return head;
    
    if (k == 1) {
        // Remove the head node
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    int cnt = 0;
    ListNode* temp = head;
    ListNode* prev = nullptr;

    while (temp != nullptr) {
        cnt++;
        if (cnt == k) {
            
            ListNode* nextNode = temp->next;
            prev->next = nextNode;
            delete temp; 
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
    }

    
};