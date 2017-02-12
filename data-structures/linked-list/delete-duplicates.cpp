/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    if(head != NULL)
    {
        Node* prevNode = head;
        Node* currentNode = head->next;
        int currentNumber = prevNode->data;
        
        while(currentNode != NULL)
        {
            if(currentNode->data == currentNumber)
            {
                prevNode->next = currentNode->next;
                delete currentNode;
                currentNode = prevNode;
            }
            else
            {
                currentNumber = currentNode->data;
                prevNode = currentNode;
            }
            currentNode = currentNode->next;    
        }
    }
    return head;
}
    