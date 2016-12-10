//
//  ReversePrintLinkedLists.cpp
//  
//
//  Created by Laura Wieme on 12/10/16.
//  Solution for HackerRank
//
//

/*
 Print elements of a linked list in reverse order as standard output
 head pointer could be NULL as well for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
void ReversePrint(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    if (head == NULL) {
        return;
    } else {
        ReversePrint(head->next);
        cout << head->data << "\n";
    }
}
