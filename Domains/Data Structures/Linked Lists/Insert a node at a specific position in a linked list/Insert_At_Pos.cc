/*
  Insert Node at a given position in a linked list
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  //create and initialize the node
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  if(head != NULL){
    //add to the head of the list
    if (position == 0){
      newNode->next = head;
      return newNode;
    }else{
      //Get the pointers for the Nodes that are supposed to be to the right and left of the new node
      struct Node* left = head;
      struct Node* right = NULL;
      while(position != 1){
        left = left->next;
        position--;
      }
      right = left->next;
      left->next = newNode;
      newNode->next = right;
      return head;
    }
  //return the head of the new node if the list is empty
  }else{
    return newNode;
  }
}
