// Reverse a Linked List in groups of given size - https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1#

struct node* reverse_list(struct node* prev, struct node* curr, struct node* next) {
        curr->next = prev;
        if(next == NULL) return curr;
        else return reverse_list(curr,next,next->next);
    }
    
    struct node *reverse (struct node *head, int k) { 
        node* new_head = new node(0);
        new_head->next = head;
        node* new_temp = new_head;
        node* start = head;
        node* end = head;
        while(end != NULL) {
            for(int i=0;i<k-1;i++) {
                if(end->next == NULL) break;
                else end = end->next;
            }
            
            node* temp_node = end->next;
            end->next = NULL;
            new_temp->next = reverse_list(NULL,start,start->next);
            start->next = temp_node;
            new_temp = start;
            start = temp_node;
            end = temp_node;
        }
        
        return new_head->next;
    }
