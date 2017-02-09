/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetLength(Node* head)
{
    Node* currentNode = head;
    int i = 0;
    while(currentNode != NULL)
    {
        currentNode = currentNode->next;
        i++;
    }
    return i;
}

int GetNode(Node *head,int positionFromTail)
{
    int length = GetLength(head);
    int posFromHead = length - positionFromTail;
    Node* currentNode = head;
    for(int i=0; i<posFromHead-1; i++)
    {
        currentNode = currentNode->next;    
    }
    return currentNode->data;
}