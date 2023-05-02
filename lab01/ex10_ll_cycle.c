#include <stddef.h>
#include "ex10_ll_cycle.h"

int ll_has_cycle(node *head) {
    node* fast = head;
    node* slow = head;
    while(fast) {
        fast = fast->next;
        if (!fast) {
            return 0;
        }
        fast = fast->next;
        slow = slow->next;

        if (fast == slow) {
            return 1;
        }
    }

    return 0;
}



