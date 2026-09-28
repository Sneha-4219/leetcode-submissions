/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)  return NULL;
        unordered_map<Node*,Node*> m;

        Node* oldNext = head->next;
        Node* newHead = new Node(head->val);
        Node* newNext = newHead;
        m[head] = newHead;

        while(oldNext != NULL) {
            Node* copyNode = new Node(oldNext->val);
            newNext->next = copyNode;
            m[oldNext] = copyNode;

            oldNext = oldNext->next;
            newNext = newNext->next;
        }
        oldNext = head, newNext = newHead;

        while(oldNext != NULL) {
            newNext->random = m[oldNext->random];

            oldNext = oldNext->next;
            newNext = newNext->next;
        }
        return newHead;
    }
};