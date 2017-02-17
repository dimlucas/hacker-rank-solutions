#include <list>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/



void LevelOrder(node * root)
{
    node* currentNode = root;
    list<node*> queue;
    queue.push_back(root);
    while(queue.size() != 0)
    {
        node* currentNode = queue.front();
        
        cout << currentNode->data << " ";
        if(currentNode->left != NULL)
        {
            queue.push_back(currentNode->left);    
        }
        if(currentNode->right != NULL)
        {
            queue.push_back(currentNode->right);    
        }
        queue.pop_front();
    }
}
