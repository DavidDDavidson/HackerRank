/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  class Node {
     int data;
     Node next;
  }
*/
Node Insert(Node head,int data) {
    Node new_Node = new Node();
    new_Node.data = data;
    new_Node.next = null;
    if (head == null)
    {
      head = new_Node;
    }
    else
    {
      Node temp = head;
      while (temp.next != null) temp = temp.next;
      temp.next = new_Node;
    }
    return head;
}
