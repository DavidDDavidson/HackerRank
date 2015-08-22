
/*The tree node has data, left child and right child
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
  if (root == NULL) return 0;
  int left = height(root->left);
  int right = height(root->right);
  return (left > right) ? (left + 1) : (right + 1);
}
