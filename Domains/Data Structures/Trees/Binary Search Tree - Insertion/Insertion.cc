/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node* root, int value)
{
  if(!root)
  {
    root = new node;
    root->left = root->right = NULL;
    root->data = value;
  }
  else
  {
    if(value > root->data) root->right = insert(root->right, value);
    else root->left = insert(root->left, value);
  }
  return root;
}
