/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
  Node* temp = head;
  /* If the next node is valid. Otherwise finish. Will end at the end of the
  linked list */
  while (temp->next != NULL)
  {
    /* If the data in the current node is not equal to the data in the next
    node, set the current node to be the next node */
    if (temp->data != temp->next->data)
    {
      temp = temp->next;
    }
    /* Otherwise, if the data in the current node and the data in the next node
    are the same data, make the pointer to the next node skip the duplicate
    data*/
    else
    {
      temp->next = temp->next->next;
    }
  }
  return head;
}
