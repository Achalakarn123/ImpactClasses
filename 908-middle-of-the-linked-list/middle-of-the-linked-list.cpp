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
    ListNode* middleNode(ListNode* head) 
    {
        // ListNode *rabbit=head;
        // ListNode *tortoise=head;
        // while(rabbit!=nullptr && rabbit->next!=nullptr)
        // {
        //     rabbit=rabbit->next->next;
        //     tortoise=tortoise->next;
        // }
        // return tortoise;
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        int count1=0;
        int mid=(count/2)+1;
        temp=head;
        while(temp!=nullptr)
        {
            count1++;
            if(count1==mid)
            {
                return temp;
            }
            temp=temp->next;
        }
        return nullptr;
    }
    
};