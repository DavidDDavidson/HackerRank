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
    if (head != NULL){
        struct Node *newHead = head;
        struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        while(head->next != NULL){
            head = head->next;
        }
        head->next = newNode;
        return newHead;
    }else{
        struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }
}
