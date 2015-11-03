/* Node is defined as :
class Node
   int data;
   Node left;
   Node right;

   */

static Node Insert(Node root,int value)
   {
     if(root == null)
     {
       Node temp = new Node();
       temp.data = value;
       temp.right = temp.left = null;
       return temp;
     }
     else
     {
       if(value > root.data) root.right = Insert(root.right, value);
       else root.left = Insert(root.left, value);
     }
     return root;
   }
