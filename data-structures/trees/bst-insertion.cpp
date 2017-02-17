/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

void insertToSubTree(node* root, node* newNode)
{
    if(root != NULL)
    {
        //Left SubTree
        if(newNode->data <= root->data)
        {
            if(root->left == NULL)               
            {
                root->left = newNode;    
            }
            else 
            {
                insertToSubTree(root->left, newNode);    
            }
        }
        else {
            if(root->right == NULL)
            {
                root->right = newNode;    
            }
            else
            {
                insertToSubTree(root->right, newNode);    
            }
        }
    }
}

node * insert(node * root, int value)
{
   node* newNode = new node();
   newNode->data = value;
   if(root == NULL)
   {
       root = newNode;    
   }
   else
   {
      insertToSubTree(root, newNode);
   }
   return root;
}
