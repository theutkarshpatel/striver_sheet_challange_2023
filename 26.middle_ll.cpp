ListNode* middleNode(ListNode* head) {
        // if(head==NULL || head->next==NULL){
        //     return NULL;
        // }
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        size/=2;
        while(size--){
            temp=temp->next;
        }
        return temp;
    }
