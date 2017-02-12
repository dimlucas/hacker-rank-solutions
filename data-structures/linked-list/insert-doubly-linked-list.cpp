/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node* currentNode = head;
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else if(data <= head->data)
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node* currentNode = head;
        while(currentNode != NULL)
        {
            if(currentNode->next == NULL)
            {
                newNode->prev = currentNode;
                currentNode->next = newNode;
                break;
            }
            else
            {
                if( (data >= currentNode->data) && (data < currentNode->next->data) ) 
                {
                    newNode->next = currentNode->next;
                    newNode->prev = currentNode;
                    currentNode->next = newNode;
                    break;
                }
            }
            currentNode = currentNode->next;
        }    
    }
    return head;
}
