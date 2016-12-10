//
//  ReverseLinkedLists.cpp
//  
//
//  Created by Laura Wieme on 12/10/16.
//  Solution for HackerRank
//
//

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
    // Complete this method
    if(head == NULL)
    return head;
    
    Node *prev = NULL, *current = NULL, *next = NULL;
    current = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    head = prev;
    return head;
}
