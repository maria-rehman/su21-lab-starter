#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    if (head == NULL) {
        return 0;  // Empty list is acyclic
    }
    
    node *slow_ptr = head;
    node *fast_ptr = head->next;  // Start fast_ptr one step ahead of slow_ptr
    
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        if (slow_ptr == fast_ptr) {
            return 1;  // Cycle detected
        }
        
        slow_ptr = slow_ptr->next;          // Move slow_ptr by one step
        fast_ptr = fast_ptr->next->next;    // Move fast_ptr by two steps
    }
    
    return 0;  // No cycle found
}
