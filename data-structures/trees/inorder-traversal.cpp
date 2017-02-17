/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void traverseNode(node* nd)
{
    if(nd->left != NULL)
    {
        traverseNode(nd->left);    
    }
    cout << nd->data << " ";
    if(nd->right != NULL)
    {
        traverseNode(nd->right);    
    }
}

void inOrder(node *root) 
{
    traverseNode(root);
    cout << endl;
}
