/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    struct ListNode *current = A;
    
    struct ListNode *next_next;
    
    if(current==NULL)
    return NULL;
    
    while(current->next!=NULL)
    {
        if(current->val==current->next->val)
        {
           next_next = current->next->next; 
           free(current->next); 
           current->next = next_next;   
        } 
       else
       { 
          current = current->next;  
       }  
            
    }
        
     return A;   
        
    }

