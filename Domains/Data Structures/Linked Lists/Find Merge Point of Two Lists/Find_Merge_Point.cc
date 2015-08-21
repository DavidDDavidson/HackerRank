/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.

    /* Compare every node of each list to each other. Runtime: O(nm) where
    n = |List1|, m = |List2| */

    Node* temp = headB;
    while (headA != NULL)
    {
      while (headB != NULL)
      {
        if(headA == headB) return headA->data;
        headB = headB->next;
      }
      headB = temp;
      headA = headA->next;
    }
    return -1;
}
