/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node* newNode = new Node;
    newNode->data = data;
    if(position == 0) 
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *currentNode, *prevNode;
        currentNode = head;
        int i;
        while(i<position)
        {
            prevNode = currentNode;
            currentNode = currentNode->next;
            i++;
        }
        prevNode->next = newNode;
        newNode->next = currentNode;
    }
    return head;
}
