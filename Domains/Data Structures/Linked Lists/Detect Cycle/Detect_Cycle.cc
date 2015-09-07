/*
  Detect loop in a linked list
  List could be empty also
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
  /********************************************/
  /* Based on Floyd's Cycle-Finding Algorithm */
  /********************************************/

  if (head == NULL) return 0;
  Node* slow;
  Node* fast;
  slow = fast = head;
  while (true)
  {
  /* One pointer increments by 1 node */
  slow = slow->next;
  /* The other increments by 2 nodes. It checks that 1 node over is not NULL.
  This is because if it the node is NULL over, a segment fault will occur if
  attempting to reference a next of NULL*/
  if (fast->next != NULL) fast = fast->next->next;
  /* If this else statement occurs, it means there is a NULL in the linked list
  and hence, no cycles */
  else return 0;
  /* Checks for NULL. If a NULL is found, there are no cycles in the linked
  list */
  if (slow == NULL || fast == NULL) return false;
  /* If there is a cycle, at somepoint the data of each node will be equal to
  each other */
  if (slow == fast) return true;
  }
}
