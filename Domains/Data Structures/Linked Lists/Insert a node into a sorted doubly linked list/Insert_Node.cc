/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method.
  Node* new_node = new Node;
  new_node->data = data;
  new_node->prev = NULL;
  new_node->next = NULL;
  if (head == NULL) return new_node;
  Node* temp = head;
  while (temp->next != NULL)
  {
    if (temp->data > data)
    {
      new_node->next = temp;
      new_node->prev = temp->prev;
      temp->prev->next = new_node;
      temp->prev = new_node;
    }
    temp = temp->next;
  }
  return head;


}
