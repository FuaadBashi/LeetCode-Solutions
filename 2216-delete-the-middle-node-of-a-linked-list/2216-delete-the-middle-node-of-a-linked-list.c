/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {

    struct ListNode *nextNode = head;
    struct ListNode *prevNode = NULL;
    int length = 0;

    
    while( nextNode != NULL){
        prevNode = nextNode;
        nextNode = nextNode -> next;
        ++length;
    }

    if (length == 2){
        nextNode = head;
        nextNode -> next = NULL;
        return head;
    }

    if (length == 1){
        return head = NULL;
    }

    length /= 2;
    int newlength = 0;
    nextNode = head;
    prevNode = NULL;


    while ( newlength <= length ) {

        if (newlength == length && nextNode -> next != NULL){
            nextNode = nextNode -> next;
            prevNode -> next = nextNode;

        } else if (newlength == length && nextNode -> next == NULL){
            prevNode -> next = NULL;
        }

        

        prevNode = nextNode;
        nextNode = nextNode -> next;
        ++newlength;  
    }

    return head;

}