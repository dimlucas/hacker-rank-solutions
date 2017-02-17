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
    if(nd != NULL)
    {
        if(nd->left != NULL)
        {
            traverseNode(nd->left);    
        }
        if(nd->right != NULL)
        {
            traverseNode(nd->right);    
        }
        cout << nd->data << " ";
    }
}

void postOrder(node *root) 
{
    traverseNode(root);
    cout << endl;
}
