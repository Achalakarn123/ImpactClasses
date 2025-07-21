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
        // if(head->next==nullptr)
        // {
        //     return nullptr;
        // }
        // ListNode* rabbit = head;
        // ListNode* tortoise = head;
        // ListNode* previous = nullptr;
        // while (rabbit != nullptr && rabbit->next != nullptr) {
        //     rabbit = rabbit->next->next;
        //     previous = tortoise;
        //     tortoise = tortoise->next;
        // }
        // previous->next = previous->next->next;
        // return head;
        if(head==nullptr || head->next==nullptr)
        {
            return nullptr;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        int mid=(count/2)+1;
        temp=head;
        ListNode* previous=head;
        int cnt=0;
        while(temp!=nullptr)
        {
            cnt++;
            if(cnt==mid)
            {
                previous->next=previous->next->next;
                break;
            }
            previous=temp;
             temp=temp->next;
        }
        return head;
    }
};