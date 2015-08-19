/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
  if(headA == NULL && headB == NULL)
  {
    return 1;
  }
  else if ((headA == NULL && headB != NULL) || (headB == NULL && headA != NULL))
  {
    return 0;
  }
  int match;
  while(headA != NULL && headB != NULL)
  {
    if(headA->data == headB->data)
    {
      if((headA->next == NULL && headB->next != NULL) || (headB->next == NULL && headA->next != NULL))
      {
        match = 0;
        break;
      }
      headA = headA->next;
      headB = headB->next;
      match = 1;
    }
    else
    {
      match = 0;
      break;
    }
  }
  return match;
}
