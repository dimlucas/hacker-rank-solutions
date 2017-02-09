/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node* currentNode = head;
    Node* prevNode = NULL;
    Node* tempNext = NULL;
    while(currentNode != NULL)
    {
        tempNext = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = tempNext;
    }
    return prevNode;
}
