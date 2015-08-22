/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void traverse_right (node* current);
void traverse_left (node* current);

void top_view(node* root)
{
 if (root == NULL) return;
 traverse_left (root->left);
 cout << root->data << " ";
 traverse_right (root->right);
}

void traverse_right (node* current)
{
  if (current == NULL) return;
  cout << current->data << " ";
  traverse_right (current->right);
}

void traverse_left (node* current)
{
  if (current == NULL) return;
  traverse_left (current->left);
  cout << current->data << " ";
}
