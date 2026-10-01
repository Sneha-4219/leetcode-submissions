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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL || head2 == NULL) {
            return head1 == NULL ? head2: head1;
        }

        if(head1->val <= head2->val) {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        } else {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        while(lists.size() > 1) {
            vector<ListNode*> merged;

            for(int i = 0; i < lists.size(); i+=2) {
                if(i + 1 < lists.size()) {
                    merged.push_back(mergeTwoLists(lists[i], lists[i+1]));
                } else {
                    merged.push_back(lists[i]);
                }
            }
            lists = merged;
        }
        return lists[0];
    }
};