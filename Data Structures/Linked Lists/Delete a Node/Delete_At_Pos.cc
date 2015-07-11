/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
  if(head != NULL){
    //delete the head node
    //and reroute the head pointer to the next node
    if(position == 0){
      Node* temp = head;
      head = head->next;
    }else{
      //iterate through the nodes
      Node* temp = head;
      while(position != 1){
        temp = temp->next;
        position--;
      }
      //delete the node in position n
      //and reroute the "next" pointer of the previous node
      temp->next = temp->next->next;
    }
  }
  return head;
}
