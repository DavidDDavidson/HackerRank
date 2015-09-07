/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  Node previous = NULL; // Node reversed in previous iteration
  Node current = head;  // Node to be reversed in current iteration
  while(current != NULL)
  {
    Node next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  head = previous;
  return head;
}
