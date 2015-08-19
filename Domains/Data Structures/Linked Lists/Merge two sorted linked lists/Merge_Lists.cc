/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method ]
  Node temp;
  Node new_head;
  /* Case: one list has no elements */
  if (headA == NULL){
    return headB;
  }
  if (headB == NULL){
    return headA;
  }
  /* Case: Both lists have one or more elements */
  /* Choosing the new head - the head of the merged list */
  if (headA->data >= headB->data)
  {
    new_head = headB;
    headB = headB->next;
  }
  else
  {
    new_head = headA;
    headA = headA->next;
  }
  /* linking algorithm for determining node order for merged list */
  while(headA != NULL || headB != NULL)
  {
    if(headA->data <= headB->data)
    {

    }
    else if (headA->data > headB->data)
    {

    }
  }
  return new_head;
}
