/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  Node* new_Node = new Node();
  new_Node->data = data;
  new_Node->next = NULL;
  if(!head)
  {
      head = new_Node;
  }
  else
  {
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new_Node;
  }
  return head;
}
