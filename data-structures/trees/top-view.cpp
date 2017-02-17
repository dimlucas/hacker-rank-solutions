/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void printLeftTopView(node* root)
{
    if(root != NULL)
    {
        printLeftTopView(root->left);
        cout << root->data << " ";
    }
}

void printRightTopView(node* root)
{
    if(root != NULL)
    {
        cout << root->data << " ";
        printRightTopView(root->right);
    }
}

void top_view(node * root)
{
    printLeftTopView(root->left);
    cout << root->data << " ";
    printRightTopView(root->right);
    cout << endl;
}
