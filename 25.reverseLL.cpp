ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* newHead=reverseList(head->next);
        ListNode* nextNode=head->next;
        head->next=NULL;
        nextNode->next=head;
        return newHead;
    }
