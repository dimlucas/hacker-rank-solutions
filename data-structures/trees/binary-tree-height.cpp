
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root)
    {
        this->maxHeight = 0;
        return this->max(this->subTreeHeight(root->left), this->subTreeHeight(root->right));
    }
  
    private:
        //Returns the max of the two given integers
        int max(int a, int b)
        {
            return (a >= b) ? a : b;
        }

        //Returns the height of the subroot beginning at "root"
        int subTreeHeight(Node* root)
        {
            if(root == NULL)
            {
                return 0;    
            }
            else
            {
                int leftHeight = subTreeHeight(root->left);
                int rightHeight = subTreeHeight(root->right);
                return 1 + this->max(leftHeight, rightHeight);
            }                
        }

        int maxHeight;