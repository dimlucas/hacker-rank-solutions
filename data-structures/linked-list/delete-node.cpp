/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    if(position == 0)
    {
        Node* newHead = head->next;
        delete head;
        head = newHead;
    }
    else
    {
        Node* currentNode = head;
        Node* prevNode = NULL;
        int i = 0;
        while(i < position)
        {
            prevNode = currentNode;
            currentNode = currentNode->next;
            i++;
        }
        prevNode->next = currentNode->next;
        delete currentNode;
    }
    return head;
}
