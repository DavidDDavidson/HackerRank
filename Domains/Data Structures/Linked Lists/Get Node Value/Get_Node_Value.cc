/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  int n = 0;
  Node* temp = head;
  while (temp != NULL)
  {
    n++;
    temp = temp->next;
  }
  for (int i = 1; i < n - positionFromTail; i++)
  {
    head = head->next;
  }
  return head->data;
}
