/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    
    if(head == NULL)
    {
        return false;    
    }
    
    Node* hare = head;
    Node* tortoise = head;
    
    while(true){
        //Slow movement
        tortoise = tortoise->next;
        
        if(hare->next != NULL)
        {
            //Fast Movement
            hare = hare->next->next;
        }
        else
        {
            //The hare reached the end of the list, no cycle found
            return false;
        }
        
        //If either them reached the end of the list, there is no cycle
        if( (hare == NULL) || (tortoise == NULL) )
        {
            return false;    
        }
        else if(hare == tortoise)
        {
            return true;    
        }
    }
}
