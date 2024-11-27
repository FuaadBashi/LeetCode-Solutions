/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *nextNode = head;
    struct ListNode *modifyiedNode = NULL;
    struct ListNode *prevNode = NULL;

    
    while( nextNode != NULL){
        prevNode = modifyiedNode;
        modifyiedNode = nextNode;
        nextNode = nextNode -> next;
        modifyiedNode -> next = prevNode;
    }

    head = modifyiedNode;

    return head;

}