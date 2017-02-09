/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    if(head == NULL)
    {   
        head = new Node;
        head->data = data;
        head->next = NULL;
    }
    else
    {   
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        Node* currentNode = head;
        while(currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
    return head;
}