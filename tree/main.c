
#include <stdbool.h>

bool search(node* head, int val)
 {
     if (!head)
         return (false);
     if (head->val == val)
         return (true);
     if (head->right && search(head->right, val))
         return (true);
     if (head->left && search(head->left, val))
         return (true);
     return (false);
 }