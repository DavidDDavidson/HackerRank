/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  if (head != NULL){
    if (head->next != NULL){
      //if the next node isn't NULL, continue to traverse until NULL terminating element is found
      ReversePrint(head->next);
      //print this node's data once traversal of the next element is done
      printf("%d\n", head->data);
      //if the next node is NULL, print this element and return
      //end the function
    }else{
      printf("%d\n", head->data);
      return;
    }
  }
}
