#include <stdexcept>
/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/



void decode_huff(node* root,string s)
{
    int i = 0;
    node* currentNode = root;
    string output;
    while(i < s.size())
    {
        //Move the pointer
        if(s[i] == '0')
        {
            currentNode = currentNode->left;
        }
        else if(s[i] == '1')
        {
            currentNode = currentNode->right;
        }
        else
        {
            throw new invalid_argument("Invalid character");    
        }
        
        //Check if a character is found
        if(currentNode->data != '\0')
        {
            output += currentNode->data;
            currentNode = root;
        }
        i++;    
    }
    cout << output << endl;
}
