/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  
  A node is represented by the following struct:
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    Node* nodeA = headA;
    Node* nodeB = headB;
    
    while(true) 
    {
        if( (nodeA == NULL) && (nodeB == NULL) )
        {
            break;    
        }
        if( (nodeA == NULL) && (nodeB != NULL) )
        {
            return 0;
        }
        if( (nodeB == NULL) && (nodeA != NULL) )
        {
            return 0;    
        }
        if(nodeA->data != nodeB->data)
        {
            return 0;    
        }
        nodeA = nodeA->next;
        nodeB = nodeB->next;
    }
    
    return 1;
}
