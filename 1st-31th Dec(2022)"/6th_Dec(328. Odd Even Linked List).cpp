if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* even = head->next;
        ListNode* odd = head;
        ListNode* eh = even;
        while(even!=NULL && even->next!=NULL){
            odd->next = even->next;
            even->next = even->next->next;
            odd->next->next = eh;
            odd = odd->next;
            even = even->next;
        }
        return head;
