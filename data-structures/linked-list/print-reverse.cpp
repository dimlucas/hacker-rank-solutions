/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

void PrintNode(Node* node);
void PrintNodeRec(Node* node);

void ReversePrint(Node *head)
{
    if(head != NULL)
    {
        PrintNodeRec(head);
    }
}

void PrintNodeRec(Node* node)
{
    if(node->next != NULL)
    {
        PrintNodeRec(node->next);
    }
    PrintNode(node);
}

void PrintNode(Node* node)
{
    cout << node->data << endl;    
}