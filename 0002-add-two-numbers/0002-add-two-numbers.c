
struct ListNode* addTwoNumbers( struct ListNode* l1, struct ListNode* l2 ) { 

    int carry = 0;
    int nodeVal;
    int sum;
    struct ListNode *head, *curr, *prev;
    head = curr = prev = NULL;

    while ( l1 != NULL || l2 != NULL || carry == 1  ) {

        int fst = 0;
        int snd = 0;

        if ( l1 != NULL ){
            fst = l1 -> val;
            l1 = l1 -> next;
        }

        if ( l2 != NULL ){
            snd = l2 -> val;
            l2 = l2 -> next;
        
        }

        sum     = fst + snd + carry;
        nodeVal = sum % 10;
        carry   = sum / 10;
        curr    = malloc( sizeof( struct ListNode ) );
        curr -> val = nodeVal;
    
        if (head == NULL) {
            head = curr;    
        } else {
            prev -> next = curr;
        }

        curr -> next = NULL;
        prev = curr;
        curr = curr -> next;

    }

    return head;
    
}

